

#include <stdio.h>

int main(void) {

	int a;
	int* pa;
	pa = &a;


	char b;
	double c;
	char *pb;
	pb = &b;
	double *pc;
	pc = &c;


	printf("pa의 값 : %p \n", pa);
	printf("(pa + 1) 의 값 : %p \n", pa + 1);

	printf("pb의 값 : %p \n", pb);
	printf("(pb + 1) 의 값 : %p \n", pb + 1);
	printf("pc의 값 : %p \n", pc);
	printf("(pc + 1) 의 값 : %p \n", pc + 1);


	int d;
	int *pd = &d;

	printf("pd의 값 : %p \n", pd);
	printf("(pd - 1) 의 값 : %p \n", pd - 1);


	return 0;


}
