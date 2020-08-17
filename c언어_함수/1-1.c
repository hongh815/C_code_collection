

#include <stdio.h>

int main(void) {

 	char arr[2][5] = {1,2,3,4,5,6,7,8,9,10};

	for(int i = 0; i < 2; i++) {
		for(int j = 0 ;j < 5; j++) {
			printf("%p ", &arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for(int i = 0; i<2; i++) {
		printf("%p ", &arr[i]);
		printf("\n");
	}

	printf("\n");
	printf("%p ", arr);


	int num =1;
	int number[5][5] = {0}; //초기화 작업

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			number[i][j] = num;
			num++;

		}
		printf("\n");
	}

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			printf("%2d", number[i][j]);
		}
		printf("\n");
	}
}
