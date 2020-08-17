

#include <stdio.h>

void print(int);
int add(int, int);

int main(void) {
	int result;

	result = add(10, 20);

	print(result);

	return 0;
}

void print(int num) {
	printf("%3d 출력합니다.", num);
}

int add(int x, int y) {
	return x + y;
}
