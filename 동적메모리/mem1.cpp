

#include <stdio.h>  //io라이브러리를 불러오는 순간 여기에 있는 수많은 함수들이 붙는다. 헤더파일들이 올라와있는 상태
							//헤더파일이 많으면 많을수록 메모리를 많이 잡아먹는다.
#include <stdlib.h>

int main(void) {
	int s = 10; //지역변수 --> 스택영역에 잡힌다. 4byte..
	int arr[5] = { 0 }; //지역변수 [정적 메모리 할당] --> 5개의 값은 힙영역에 잡힌다. 4 * 5 = 20byte..
	
	int *pi;
	double *pd;

	pi = (int *)malloc(sizeof(int)); //4byte
	pd = (double *)malloc(sizeof(double)); //8byte

	if(pi == NULL) {
		//pi에 값이 제대로 입력되지 않아 null값이 될경우를 대비
		printf("메모리가 부족합니다.");
		exit(1);
	}

	if(pd == NULL) {
		//pd에 값이 제대로 입력되지 않아 null값이 될경우를 대비
		printf("메모리가 부족합니다.");
		exit(1);
	}

	*pi = 10;
	*pd = 10.1;


	printf("%d %.2lf\n", *pi, *pd);
	printf("%p %p\n", pi, pd);

	free(pi);
	free(pd);

	printf("%d %lf", *pi, *pd);
	printf("%p %p\n", pi, pd);
	return 0;
}
