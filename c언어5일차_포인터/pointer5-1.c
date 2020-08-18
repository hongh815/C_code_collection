

#include <stdio.h>

void func(int*, int*);

int main(void) {

	int mod, rem;

	func(&mod, &rem);

	printf("몫: %d, 나머지: %d", mod,  rem);

}


void func(int* mod, int* rem) {
	
	unsigned int n;

	printf("양수 입력 : ");
	scanf("%d", &n);

	*mod = n / 4;
	*rem = n % 4;
}
