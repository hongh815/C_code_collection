#include <stdio.h>

void return_sum(int*, int);
void show(int*, int);



int main(void) {

	int ary[10] = {1, 2};
	int* parr;
	parr = ary;

	return_sum(parr, sizeof(ary)/sizeof(int));
	show(parr, sizeof(ary)/sizeof(int));
	
}




void return_sum(int* parr, int number) {

	for(int i=0; i<number-2; i++) {
		*(parr + (i+2)) = *(parr + i) + *(parr + (i+1));
	}
}

void show(int* result, int num) {
	printf("ary[10] = {");
	for(int i=0; i<num; i++) {
		printf("[%d], ", *(result+i));
	}
	printf("}\n");
}
