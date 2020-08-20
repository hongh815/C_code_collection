
#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int **parr;
	int **pbrr;

//동적메모리
	parr = (int **)malloc(sizeof(int *)*4);
	pbrr = (int **)malloc(sizeof(int *)*4);

	for(int i = 0; i < 4; i++) {
		parr[i] = (int *)malloc(sizeof(int)*4);
		pbrr[i] = (int *)malloc(sizeof(int)*4);
	}

//값 입력 부분	
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			parr[i][j] = (j+1) + (i * 4);
		}	
	}
	int ni = 16;
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			pbrr[i][j] = ni;
			ni--;
		}	
	}

// printf 부분
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			printf("%4d", parr[i][j]);
		}
		printf("\n");
	}

	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			printf("%4d", pbrr[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			printf("%4d", (pbrr[i][j] + parr[i][j]));
		}
		printf("\n");
	}

	//free 부분
	for(int i = 0; i < 4; i++ ) {
		free(parr[i]);
		free(pbrr[i]);
	}
	free(parr);
	free(pbrr);

	return 0;
}
