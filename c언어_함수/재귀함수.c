

//자기 스스로를 부르는 함수

#include <stdio.h>

void printApple(int);

int main(void) {
	
	printApple(5);

	return 0;
}


void printApple(int count) {
	printf("Apple\n");
	if(count == 1) {
		return;
	}
	printApple(count - 1);
}
