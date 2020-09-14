#include <stdio.h>
void arrFixed(int*, int*, int);
int main(void) {

	int A[3] = {1, 2, 3};
	int B[10];
	int* parr;
	int* pbrr;
	pbrr = B;
	parr = A;


	arrFixed(parr, pbrr, 10);
}
void arrFixed(int* a, int* b, int n) {

	for(int i=0; i<n; i++) {
		*(b + i) = *(a + i);
		printf("%d ", *(b + i));
	}
}
