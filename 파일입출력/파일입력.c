

#include <stdio.h>

int main(void) {

    FILE* fp;

    char str[] = "apple"; // a p p l e \0

    fp = fopen("apple.txt", "a"); //apple.txt라는 텍스트 파일을 만들겟다.

    if(fp == NULL) { //만약 fp에 값이 들어가지 않았을 경우
        printf("파일을 만들지 못했습니다.\n");
        return 1;
    }

    int i = 0;
    while (str[i] != '\0') {

        fputc(str[i], fp);
        i++;
    }

    fclose(fp);

    return 0;
}
