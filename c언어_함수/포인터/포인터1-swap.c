



//swap에 포인터를 적용시켜서 a 와 b 의 값을 서로 바꾸는 연습을 한다.

#include <stdio.h>

void swap(int, int);
void pswap(int*, int*);


int main(void) {

	int a =10;
	int b =20;
	printf("a : %d, b : %d\n", a, b);
	pswap(&a,&b);

	printf("a : %d, b : %d\n", a, b);

}

void pswap(int *sa, int *sb) {

	int temp = 0;
	temp = *sa;
	*sa = *sb;
	*sb = temp;

	printf("sa : %d, sb : %d\n", *sa, *sb);
}

void swap(int sa, int sb) {

	int temp = 0;
	temp = sa;
	sa = sb;
	sb = temp;

	printf("sa : %d, sb : %d\n", sa, sb);
}
