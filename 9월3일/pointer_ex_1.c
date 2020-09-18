#include <stdio.h>

int main() {

	int arr[5][5] = {0, };
	int (*parr)[5] = arr;

	for(int j=0; j<5; j++) {
		for(int i=0; i<5; i++) {
			arr[j][i] = ((i+1) + 5*j);
			(*parr)[i] = arr[j][i];
			printf("%d\t", (*parr)[i]);
		}
		printf("\n\n");
	}


	return 0;
}
