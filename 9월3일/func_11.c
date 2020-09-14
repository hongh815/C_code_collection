#include <stdio.h>
#include <stdlib.h>


char return_small(char*);
int main(void) {

	printf("%d", 'a');

	char* arr;
	arr = (char*)malloc(sizeof(arr) + 1);

	printf("장문의 문장을 입력하시오. >> \n\n");
	scanf("%s", arr);
	return_small(arr);

	printf("\n\n");
	printf("%s\n", arr);
}

char return_small(char* arr) {

	for(int i=0; i<sizeof(arr)*10; i++) {		
		if(*(arr+i) > 64 && *(arr+i) < 97) {
			*(arr+i) += 32;
		}
	}
	return *arr;	
}
