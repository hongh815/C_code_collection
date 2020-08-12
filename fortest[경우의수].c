
// 조합과 순열과 경우의 수 test

#include <stdio.h>

int main(void) {


	int count = 0;
	int countP = 0;
	int countC = 0;

	for(int i=1; i<6; i++) {
		for(int j = 1;j<6; j++){
			for(int k = 1;k < 6; k++){
	
				printf("(%d, %d, %d)\n", i, j, k);
				count++;

				if((i!=j)&&(i!=k)&&(j!=k)) {
					countP++;
				} //조합

				if((i<j)&&(i<k)&&(j<k)) {
					countC++;
				} //순열
			}
		}
	}

	printf("경우의 수 : %d\n", count);
	printf("조합 경우의 수 : %d\n", countP);
	printf("순열 경우의 수 : %d\n", countC);
} 
