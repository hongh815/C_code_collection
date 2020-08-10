


#include <stdio.h>

int main(void)
{
	char str;

	printf("문자입력 : ");
	scanf("%c", &str);

	printf("%c 문자의 아스키 코드값은 %d 입니다.\n", str, str);
}
