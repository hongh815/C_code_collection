

#include <stdio.h>

int main(void) {

	char str [80];
	int age;
	float height;

	printf("이름 입력 : ");
	scanf("%s" , str);
	printf("나이와 키 입력 : ");
	scanf("%d", &age);
	scanf("%f", &height);
	printf("%s, %d 살, %.1f cm", str, age, height);

}
