#include <stdio.h>

void func(int*, int*);
int main(void) {

	int mod, rem;
	func(&mod, &rem);
	printf("4로 나눈 몫과 나머지 : >>\n\n##몫 : %d\n##나머지 : %d\n\n", mod, rem);
}

void func(int* mod, int* rem) {
	int a;
	printf("양수 입력 : >> ");
	scanf("%d", &a);

	*mod = a/4;
	*rem = a%4;
}
