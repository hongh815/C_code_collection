

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {


	char* parr[5];
	char str[80];

	for(int i=0; i<5; i++) {
		printf("메모 입력 : ");
		gets(str);
		parr[i] = (char *)malloc(strlen(str) + 1);
		strcpy(parr[i], str);
	}

	for(int i=0; i<5; i++) {
		printf("%s ", parr[i]);
	}

	for(int i=0; i<5; i++) {
		free(parr[i]);
	}

	return 0;
	
}
