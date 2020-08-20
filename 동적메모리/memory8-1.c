

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	int* parr;
	int num;
	int size = 2;

	parr = (int *)malloc(sizeof(int)*size);
	
	printf("최고 기온과 최저 기온을 입력하세요 : \n");
	for(int i=0; i<2; i++) {	
		scanf("%d", &num);
		parr[i] = num;
	} 

	printf("일교차는 %d 도 입니다.", (parr[0]-parr[1]));


	free(parr);

	return 0;
	
}
