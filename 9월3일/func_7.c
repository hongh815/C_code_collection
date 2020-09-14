#include <stdio.h>

double bubleSort(double*);
int main(void) {

	double ary[5] = {1.0, 2.5, 5.3, 23.2, 5.1};
	double* pary = ary;

	bubleSort(pary);

	for(int i=0; i<5; i++) {
		printf("%.1lf ", *(pary+i));
	}
}

double bubleSort(double* x) {
	
 	double temp;
	for(int j=0; j<5; j++) {
		for(int i=0; i<5; i++) {
			if(*(x+i) < *(x+(i+1))) {
				temp = *(x+i);
				*(x+i) = *(x+(i+1));
				*(x+(i+1)) = temp;
			}
		}
	}
	return *x;
}
