

#include <stdio.h>
#include <stdlib.h>


void printArr(int);
//함수선언을 해줘야 함수가 어디 있든 읽어들인다.

int main(void) {
	//int = input(argument)
	//return = output

	printArr(10);

	return 0;
	
}

void printArr(int arr) {

	printf("출력합니다.");
}
