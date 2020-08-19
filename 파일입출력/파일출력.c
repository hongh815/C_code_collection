

#include <stdio.h>

int main(void) {


    FILE* fp;
    int ch;

    fp = fopen("apple.txt", "r");
    if(fp == NULL) {
        printf("파일을 열수 없습니다.\n");
        return 1;
    }

    while(1) {
        ch = fgetc(fp);
        if(ch == EOF) {
            break;
        }
        putchar(ch);
    }

    fclose(fp);
}
