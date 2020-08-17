

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* arrayPtr();

int main(void)
{


	int (*pa)[4]; //포인터가 4개 pa포인터 네개 잡는데 괄호를 치면 알아서 밑의 행렬을 잡아준다.

	pa = arrayPtr();
	for(int i=0; i < 3; i++) {
		for(int j =0; j < 4; j++) {
			printf("%3d", pa[i][j]);
		}
		
			printf("\n");
	}

printf("\n");
printf("\n");
printf("\n");
}


int* arrayPtr() {

	int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

	for(int i=0; i < 3; i++) {
		for(int j =0; j < 4; j++) {
			printf("%3d", arr[i][j]);
		}
		
			printf("\n");
	}

	int* pArr;
	pArr = arr;

	return pArr;
}
