

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	
	FILE* fp;
	
	fp = fopen("text.txt", "r");

	if(fp == NULL) {
		printf("파일이 제대로 출력되지 않습니다.");
		return 1;
	}

	int ch;
	while(1) {
		ch = fgetc(fp);
		if(ch == EOF) {
			break;
		}
		if(ch == 46) {
		putchar(ch);
		printf("\n");

		}
		putchar(ch);
	}

	fclose(fp);	
}
