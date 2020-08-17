



//	포인터 : 주소값을 저장하는 변수
// 변수 정의	int *
// 주소값	&
// 간접참조 연산자	*[변수명]

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {

	int *pa;
	int ab = 10;

	printf("ab주소 : %p, ab값 : %2d\n",&ab, ab);
	pa = &ab;
	printf("pa주소 : %p, pa값 : %p\n", &pa, pa);
	*pa = 20;

	printf("ab주소 : %p, ab값 : %2d\n",&ab, ab);
	printf("pa주소 : %p, pa값 : %p\n", &pa, pa);

}
