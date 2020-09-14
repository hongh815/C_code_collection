

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int size = 0;
	printf("배열의 사이즈를 입력하세요 : ");
	scanf("%d : ",&size);

	int arr[size];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;

	int *pary;

	pary = (int *)malloc(size*sizeof(int));


//	pary[0] = 1;
//	pary[1] = 2;
//	pary[2] = 3;
//	pary[3] = 4;
//	pary[4] = 5;

	*pary = 1;
	*(pary+1) = 2;
	*(pary+2) = 3;
	*(pary+3) = 4;
	*(pary+4) = 5;

	free(pary);


	pary = (int *)malloc(3*sizeof(int));    
	
			// 이렇게 위의 사이즈 크기대로 배열을 정한후 free로 비워주고 다시 이렇게 3개나 4개 배열로 재정의할수 있다.	
	*pary = 1;
	*(pary+1) = 2;
	*(pary+2) = 3;
	free(pary);

	pary = (int *)malloc(4*sizeof(int));	
	*pary = 1;
	*(pary+1) = 2;
	*(pary+2) = 3;
	*(pary+3) = 4;

	printf("%d", sizeof(pary));
	free(pary);

}
