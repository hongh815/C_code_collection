

#include <stdio.h>

int main(void) {
    FILE* fp;
    FILE* fpw;
    int ch;

    fp = fopen("apple.txt", "r");
    fpw = fopen("apple_copy.txt", "w");

    if((fp == NULL) || (fpw == NULL)) {
        printf("파일을 열수 없습니다.");
        return 1;
    }

    int i = 0;
    while(1) {
        ch = fgetc(fp);
        if(ch == EOF) {
            break;
        }
        fputc((char)ch, fpw);
    }

    printf("파일 복사를 완료했습니다.\n");

    fclose(fp);
    fclose(fpw);
    return 0;
}
