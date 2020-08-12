#include <stdio.h>



int main(void) {

	int num1 = 0;

	int num2 = 0;

	int value = 0;

	char cal;



	printf("사칙 연산 입력(정수): ");

	scanf("%d%c%d", &num1, &cal, &num2);

	if (cal == '+')
	{
		value = num1 + num2;
	}
	if (cal == '-')
	{
		value = num1 - num2;
	}
	if (cal == '*')
	{
		value = num1 * num2;
	}
	if (cal == '/')
	{
		value = num1 / num2;
	}
	printf("%d%c%d=%d", num1, cal, num2, value);
}
