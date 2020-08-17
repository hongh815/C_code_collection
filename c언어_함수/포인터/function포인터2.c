#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int func(int (*fp)(int, int), int, int);
int sum(int, int);
int minu(int, int);
int mux(int, int);
int div2(int, int);



int main(void) {
	
	int (*fP)(int, int);
	int result;

	//function pointer로 sum 함수 가리켜서 실행시키는 것
	fP = sum;
	printf("%d\n", fP(10, 20));

	
	//function pointer로 sum 함수 가리켜서 실행시키는 것에서 func 함수를 응용
	result =	func(sum, 200, 20);
	printf("%d\n", result);

	//function pointer로 minu함수 가리켜서 실행시키는 것
	fP = minu;
	printf(" %d\n", fP(20, 1));


}

int func(int (*fp)(int, int), int x, int y) {

	return fp(x, y);
}

int sum(int x, int y) {	return x + y; }
int minu(int x, int y) { return x - y; }
int mux(int x, int y ) { return x * y; }
int div2(int x, int y) { 
	return x / y;
}


