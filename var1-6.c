#include <stdio.h>

int main(void)
{
	char name[80];
	int age;
	double height; //double 일때는 %lf
	char bl[80];

	printf("10년 후의 프로필...\n");

	printf("이름 : ");
	scanf("%s", name);

	printf("나이 : ");
	scanf("%d", &age);

	printf("키 : ");
	scanf("%lf", &height);
	
	printf("혈액형 : ");
	scanf("%s", bl);

	
	printf("\n이름: %s\n나이: %d살\n키: %.1lfcm\n혈액형: %s형\n", name, age, height, bl);

}
