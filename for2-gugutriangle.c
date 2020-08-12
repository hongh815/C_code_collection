#include <stdio.h>

int main(void) {
	for(int i = 2; i < 10; i++) {

		for(int j = 3; j < (i+1); j++) {
			printf("%d * %d = %d ", j , i-1, j*(i-1));
		}
		printf("\n");
	

		for(int j = 1; j < (i+1); j++) {
			printf("%d * %d = %d ", i , j, i*j);
		}
		printf("\t");
	}	
}
