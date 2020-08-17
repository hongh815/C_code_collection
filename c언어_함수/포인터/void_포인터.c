

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) 
{
	void *void_P;

	int a = 10;
	double b = 10.2;
	int *int_P;

	void_P = &a;
//	printf("%d", *void_P); //void포인터는 이렇게 접근은 가능하나, 바이트를 에초로 타입이 없어서 결정하지 못했으므로 접근이 불가하다.
//	printf("%p", *(void_P + 1)); //이것 또한 char형이라면 가능겠지만 void형이므로 타입의 byte값이 정해지지 않아 접근불가.

	printf("%d\n", *(int *)void_P); //void포인터를 강제로 int포인터로 강제 형변환 하는 문.
	printf("%p\n", *((int*)void_P + 1));  //void포인터를 강제로 int포인터로 강제 형변환 하는 문.


	void_P = &b;

	printf("%.1lf\n", *(double *)void_P); //void포인터를 강제로 int포인터로 강제 형변환 하는 문.
	printf("%lf\n", *((double*)void_P + 1));  //void포인터를 강제로 int포인터로 강제 형변환 하는 문.

}
