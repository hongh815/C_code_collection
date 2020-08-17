

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void) {
	
	char* str[3];
	char temp[80];

	for(int i = 0; i < 3; i++) {
		printf("문자열을 입력하시오. : ");
		gets(temp);
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
	}

	for(int i=0; i<3; i++) {
		printf("%s : %d\n", str[i], strlen(str[i]));
	}

	for(int i=0; i<3; i++) {
		free(str[i]);
	}

}
