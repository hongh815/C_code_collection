#include <stdio.h>


double average(int*);
int three_set(int*, int);
int main(void) {
	int a,b,c,d,e;
	int arr[5] = {a,b,c,d,e};
	printf("# 5명의 심사위원 점수 입력 : >> \n\n");
	for(int i=1; i<6; i++) {
		printf("%d. ", i);
		scanf("%d", &arr[i-1]);
	}
	
	int* parr;
	parr = arr;

	three_set(parr, sizeof(arr)/sizeof(int));
	
	printf("\n## 유효점수 : %d, %d, %d \n", arr[1], arr[2], arr[3]);
	printf("## 평균 : %.1lf\n", average(parr));
}

int three_set(int* parr, int num) {

	int temp;
	for(int j=0; j<num; j++) {
		for(int i=0; i<num-1; i++) {
			if(*(parr + i) > *(parr + (i+1))) {
				temp = *(parr + (i+1));
				*(parr + (i+1)) = *(parr + i);
				*(parr + i) = temp;
			}
		}
	}

	return *parr;
}

double average(int* parr) {

	double avg;
	int sum = 0;
	for(int i=1; i<4; i++) {
		sum += *(parr + i);
	}
	avg = (double)sum / 3;

	return avg;
}

