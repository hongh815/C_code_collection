

#include <stdio.h>


void swap(double*, double*);
void line_up(double*, double*, double*);


int main(void) {

	double max, mid, min;
	printf("실수값 세 개 입력 : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;

}
// 구현해야 하는 함수 // 구현해야 하는 함수
//   실행결과
//실수값 세 개 입력 :2.7,1.5,3.4 정렬된 값 출력 : 3.4, 2.7, 1.5

void swap(double* pa, double* pb) {

	double temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;

	printf("\n%lf %lf", *pa, *pb);
}
void line_up(double* maxp, double* midp,  double* minp) {
	
	int result=2;
	double temp;

	double fnums[4] = {*maxp, *midp, *minp, *maxp};

	for(int i=0; i<3; i++) {
		if(fnums[i] > fnums[i + 1]) {
			result = 1;
			printf("오호");
		} else{
			 result = 0;
			 swap(&fnums[i], &fnums[i+1]);
			 printf("이제 바뀌겟군!!")i;
		}
	}
}
