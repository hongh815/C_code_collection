

#include <stdio.h>

int main(void) {

	double arr[5] = {0};
	double *pa;

	pa = &arr[0];

	printf("배열 요소 값 : ");
	scanf("%lf%lf%lf%lf%lf", pa, (pa+1), (pa+2), (pa+3), (pa+4));
	
	double sum = 0;
	for(int i=0; i<5; i++) {
		sum += *(pa + i);	
	}
	printf("평균 : %.2lf", sum/5);

}
