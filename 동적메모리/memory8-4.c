

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char temp[100];
	char** str;
	int num;
	int size = 5;
	char string[3][20] = {"학번 :", "이름 : ",  "점수 :"};

	str = (char**)malloc(sizeof(char)*size + 1);

	num = 0;
	while (1) {
		if(temp[0] != "end") {
			printf("이름 : ");
			gets(temp);
			str[num] = (char*)malloc(strlen(temp) + 1);
			strcpy(str[num], temp);

			num++; 
		} else break;
		printf("기부금 : ");
		scanf("%d", )
	}
}
