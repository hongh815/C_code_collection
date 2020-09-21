
#include <stdio.h>

void arr_print(double *, int);
double return_avg(double* parr);
int main(void) {

	double arr1[4] = {1.5, 2.5, 3.5, 0.5};
	double arr2[4] = {5.5, 6.5, 1.5, 0.5};
	double arr3[4] = {41.5, 21.5, 6.5, 0.5};

	double *parr1;
	double *parr2;
	double *parr3;

	parr1 = arr1;
	parr2 = arr2;
	parr3 = arr3;

	printf("parr1 : ");
	arr_print(parr1, sizeof(arr1)/sizeof(arr1[0]));
	printf("평균 = %.1lf\n", return_avg(parr1));
}

void arr_print(double* parr, int num) {

	for(int i=0; i<num; i++) printf("%.1lf ", *(parr+i));
	printf("\n");
}

double return_avg(double* parr) {

	double averge = (*(parr+0) + *(parr+1) + *(parr+2) + *(parr+3))/4;

	return averge;
}
