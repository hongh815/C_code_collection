#include <stdio.h>					// printf --> printk 로 변환 후 테스트 진 
//#include <math.h>					// 삭제*** warning 86행 (sqrt, pow) 함수 사용. 
#include "math_func.h"

//extern double fabsn(double cal_x);
//extern int pown(int a, int n);
//extern double sqrtn(double num);

#define MAX_VOTE_DATA	10
static unsigned int in_MAX_DATA_VAL = 30;												//		임의로 정한 데이터 멕스 값 
static int in_MIN_DATA_VAL = 0; 														//		임의로 정한 데이터 민 값 
static int ch_cnt = 3;																	// 		채널 카운트 
double voting_temp = 0; 																//		세 값이 모두 결함값일 경우, Safe Action 수행하여 직전의 데이터 출력. 
static unsigned char ch_status[3] = {0};

/*
char	/* Boolean Data +/
BooleanMedianValue
(unsigned char ucBMvalueA, unsigned char ucBMvalueB, unsigned char ucBMvalueC) 
{
	unsigned char ucBMedianValue;
	unsigned char ucBMvalueArr[3] = {ucBMvalueA, ucBMvalueB, ucBMvalueC};
	int i, j;
	for(i=0; i<3; i++) 
	{
		int cnt = 0;
		for(j=0; j<3; j++) 
		{
			if(ucBMvalueArr[i] == ucBMvalueArr[j]) 
			{
				cnt++;		// Voting count 
			}		
		}		
		if(cnt == 2)		// Count = 2 -> Voting complete
		{
			ucBMedianValue = ucBMvalueArr[i];
			break;
		}
		else if(cnt == 1)	// Count = 1 -> Not mached with datas
		{
			ucBMedianValue = ucBMvalueArr[0];
		}
		else return 0;		// Count > 2 -> Error : Equal values  
	}
	return ucBMedianValue;
}
*/	
static double AnalogVoting( double *ch_input_data )
{
	int i = 0;
	int data_cnt = 0;
	int ret_data_filter = 0;

	unsigned int ch_status_sum = 0;
	unsigned int buf_status_sum = 0;
	
	double ret_val = 0;
	double date_avr = 0.;
	double date_std_dev = 0.;
	double tmp_ch[MAX_VOTE_DATA] = {0.};
	
/////////////////////////////////////////////////////////////////////////

	for( i=0; i<3; i++ ) {
		if(*(ch_input_data + i) > in_MIN_DATA_VAL && *(ch_input_data + i) < in_MAX_DATA_VAL )
		{
			ch_status[i] = 1;
			buf_status_sum ++;
			printf( "\nnormal data count %d", buf_status_sum );
		} else ch_status[i] = 0;

		if( ch_status[i] > 0 ) 
		{
			ch_status_sum ++;
		}
	}
	
	for( i=0; i<3; i++)
	{
		printf("\nch_status[%d] == %d", i, ch_status[i]);
	}
	
	

	switch( ch_status_sum ) {
normal_one: case 1:									// Nomal Device : 1, Fail Device : 2
			/* Data relocation */
			printf("\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
			printf("\n ------------------  NORMAL DATA :: 1 --------------------");
			printf("\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
					
			for( i=0; i<MAX_VOTE_DATA; i++ ) {
				if( ch_status[i] == 1 ) {
					tmp_ch[data_cnt] = ch_input_data[i];
					data_cnt++;
				}
			}

			/* Output data */
			printf("\n ------------------ data_cnt ________ :: %d\n", data_cnt);
			ret_val = tmp_ch[data_cnt - 1];
			voting_temp = ret_val;
			break;
			
normal_two: case 2:									// Nomal Device : 2, Fail Device : 1
			/* Data relocation */
			printf("\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++");		
			printf("\n ------------------  NORMAL DATA :: 2 --------------------");
			printf("\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			
			for( i=0; i<MAX_VOTE_DATA; i++ ) {
				if( ch_status[i] == 1 ) {
					printf("\n===========>>data :: %lf", ch_input_data[i] );
					tmp_ch[data_cnt] = ch_input_data[i];
					printf("\n tmp_ch[%d] --> %lf\n", data_cnt, tmp_ch[data_cnt]);
					data_cnt++;
				}
			}

			/* Standard deviation calculation */
			date_avr = (tmp_ch[0] + tmp_ch[1]) / 2.;
			date_std_dev = sqrtn((pown((tmp_ch[0]-date_avr),2)+pown((tmp_ch[1]-date_avr),2)) / 2.);		//---------> 표준편차 

			if( fabsn(date_std_dev) > 5. ) {
				/* Output data */
				ret_val = tmp_ch[0];				// High priority CH_A output
				voting_temp = ret_val;
			} else {
				/* Output data */
				ret_val = date_avr;					// Average value output
				voting_temp = ret_val;
			}
			break;

		case 3:									// Nomal Device : 3, Fail Device : 0
			
										/* DATA CLASSIFICATION */
// -----------------------------------------------------------------------------------------------------			
			if	   ( buf_status_sum == 1 ) 	goto normal_one;
			else if( buf_status_sum == 2 ) 	goto normal_two;
			else if( buf_status_sum == 0 )	goto normal_zero;
			else 
			{
				printf("\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
				printf("\n ------------------  NORMAL DATA :: 3 --------------------");
				printf("\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			}
// -----------------------------------------------------------------------------------------------------
			
			/* Data relocation */
			for( i=0; i<MAX_VOTE_DATA; i++ ) {
				if( ch_status[i] == 1 ) {
					tmp_ch[data_cnt] = ch_input_data[i];
					data_cnt++;
				}
			}

			/* Standard deviation calculation - CH_A & CH_B & CH_C */
			date_avr = (tmp_ch[0] + tmp_ch[1] + tmp_ch[2]) / 3.;										//----------> Average Voting
			date_std_dev = sqrtn((pown((tmp_ch[0]-date_avr),2)+pown((tmp_ch[1]-date_avr),2)+
				pown((tmp_ch[2]-date_avr),2)) / 3.);														//----------> 표준편차 

			if( fabsn(date_std_dev) > 5. ) {
				/* Standard deviation calculation - CH_A & CH_B */
				date_avr = (tmp_ch[0] + tmp_ch[1]) / 2.;
				date_std_dev = sqrtn((pown((tmp_ch[0]-date_avr),2)+pown((tmp_ch[1]-date_avr),2)) / 2.);

				if( fabsn(date_std_dev) > 5. ) {
					/* Standard deviation calculation - CH_A & CH_C */
					date_avr = (tmp_ch[0] + tmp_ch[2]) / 2.;
					date_std_dev = sqrtn((pown((tmp_ch[0]-date_avr),2)+pown((tmp_ch[2]-date_avr),2)) / 2.);

					if( fabsn(date_std_dev) > 5. ) {

						/* Standard deviation calculation - CH_B & CH_C */
						date_avr = (tmp_ch[1] + tmp_ch[2]) / 2.;
						date_std_dev = sqrtn((pown((tmp_ch[1]-date_avr),2)+pown((tmp_ch[2]-date_avr),2)) / 2.);

						if( fabsn(date_std_dev) > 5. ) {
							/* Output data */
							ret_val = tmp_ch[0];		// High priority CH_A output
							voting_temp = ret_val;
						} else {
							/* Output data */
							ret_val = date_avr;			// Average value output - CH_B & CH_C
							voting_temp = ret_val;
						}
					} else {
						/* Output data */
						ret_val = date_avr;				// Average value output - CH_A & CH_C
						voting_temp = ret_val;
					}
				} else {
					/* Output data */
					ret_val = date_avr;					// Average value output - CH_A & CH_B
					voting_temp = ret_val;
				}
			} else {
				/* Output data */
				ret_val = date_avr;						// Average value output - CH_A & CH_B & CH_C
				voting_temp = ret_val;
			}
			break;
		default:
			/* Output data */
			ret_val = 0.;
normal_zero:
			printf("\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++");				
			printf("\n ------------------  NORMAL DATA :: 0 --------------------");
			printf("\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			ret_val = voting_temp;
			break;
	}

	return ret_val;
}
// test code
int main(void)
{
	double test_buf[10] = {23, 23.2 , 255.2, 13, 222, 344, 34.2, 43.3};
	
	printf("--> %lf,,," , AnalogVoting( test_buf ));
	return 0;
}
