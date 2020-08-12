#include <stdio.h>


int main(void) {

	int a,b;

	printf("a와 b의 값을 각각 입력 : \n");
	scanf("%d %d", &a,&b);

	int cal = (a > b) ? (a/b) : (a%b);

	printf("%d", cal);
}
