

#include <stdio.h>

int main(void) {

	int arr1[2][2];
	int arr2[2][2];
	int num1=1;
	int num2=1;


	//arr1 행렬
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			
			arr1[i][j] = num1;
			num1++;
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
printf("\n");

	//arr2 행렬
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			
			arr2[i][j] = num2 + 1;
			num2++;
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}

printf("\n");

	int arrRe[2][2] = {0};

	//행렬간 덧셈
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			
			arrRe[i][j] = arr1[i][j] + arr2[i][j];
			printf("%d ",arrRe[i][j]);
		}
		printf("\n");
	}

printf("\n");

	//뺄셈
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			
			arrRe[i][j] = arr1[i][j] - arr2[i][j];
			printf("%d ",arrRe[i][j]);
		}
		printf("\n");
	}

	//곱셈
//	for(int i=0; i<2; i++){
//		for(int j=0; j<2; j++){
//			
//			arrRe[i][j] = arr1[i][j] * arr2[j][i];
//			printf("%d ",arrRe[i][j]);
//		}
//		printf("\n");
//	}
	
//	int arrRe2[2][2] = {0};
printf("\n");

	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			int temp = 0;
			for(int k =0; k<2; k++) {
				temp += (arr1[i][k] * arr2[k][j]);
			}
			arrRe[i][j] = temp;
			printf("%d ", arrRe[i][j]);
		}
		printf("\n");
	}
}
