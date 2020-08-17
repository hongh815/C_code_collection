

#include <stdio.h>

int main(void) {

	int *p;

	int a = 10;

	p = &a;

	printf("%d\n a를 그냥 받아온 값\n", a);
	printf("%p\n a의 주소값을 받아온 값\n", &a);
	printf("%d\n a를 p라는 포인터로 받아온 값\n", *p);

	printf("%p\n p라는 포인터 주소값을 표시한 값\n", p);
}
