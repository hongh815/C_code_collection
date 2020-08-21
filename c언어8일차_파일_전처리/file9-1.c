

#include <stdio.h>

int main(void){

	FILE* fp;
	FILE* fpw;
	int ch;

	fp = fopen("a.txt", "r");
	fpw = fopen("b.txt", "w");

	if((fp == NULL) || (fpw == NULL)) {
		printf("파일을 만들지 못했습니다.");
		return 1;
	}

	while(1) {
		ch = fgetc(fp);
		if(ch == EOF) {
			break;
		}
		fputc((char)ch, fpw);
	}
	
	printf("복사할 파일명 : a.txt\n");
	printf("복사 받을 파일명 : b.txt\n");
	printf("# a.txt 파일을 b.txt 파일로 복사하였습니다.\n"); 

	fclose(fp);
	fclose(fpw);

	return 0;
}
