

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x, y;

	printf("가로, 세로를 입력하시오 \n");
	scanf("%d %d", &x, &y);

	int **arr;

	arr = (int **)malloc(sizeof(int *) * x);

	for(int i = 0; i < x; i++) {
		arr[i] = (int *)malloc(sizeof(int) * y);
	}

	for(int i=0; i<x; i++) {
		for(int j=0; j<y; j++) {
			arr[i][j] = i + j;
		}
	}
	for(int i=0; i<x; i++) {
		for(int j=0; j<y; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}


	for(int i=0; i < x; i++ ) {
		free(arr[i]);
	}
	free(arr);
}
