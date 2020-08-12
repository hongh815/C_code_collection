#include <stdio.h>



int main(void) {

	int age, b,size;

	age = 25;

	b = 95;
	if (age < 20 && b>95) {
		size = 'L';
	}
	else if (age < 20 && b >= 85) {
		size = 'M';
	}
	else if (age < 20 && b < 85) {
		size = 'S';
	}
	else if (age >=20 && b >= 100) {
		size = 'L';
	}
	else if (age >= 20 && b >= 90) {
		size = 'M';
	}
	else {
		size = 'S';
	}
	printf("사이즈는 %c 입니다.", size);

}
