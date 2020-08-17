

//sum(5) = 5 + 4 + 3 + 2 + 1
//sum(4) = 4 + 3 + 2 + 1
//sum(3) = 3 + 2 + 1
//sum(2) = 2 + 1
//sum(1) = 1

#include <stdio.h>
int sum(int);

int main(void) {

	printf("%d\n", sum(5));
	return 0;
}

int sum(int num) {
	if(num == 1) {
		return 1;
	} else {
		return num + sum(num - 1);
	}
}
