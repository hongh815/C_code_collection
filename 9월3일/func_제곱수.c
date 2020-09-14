

#include <stdio.h>
#include <stdlib.h>

int my_power(int, int);

int main(void) {

	int result;
	int base_num;
	int index;

	printf("밑수와 지수를 입력하시오. : ");
	scanf("%d%d", &base_num, &index);

	result = my_power(base_num, index);
	printf("%d의 %d제곱수의 결과는 = %d\n", base_num, index, result);
}

int my_power(int base_num,  int index) {

	int* count;
	printf("밑수 : %d\t", base_num);
	printf("지수 : %d\n\n", index);

	count = (int*) malloc (index + 1);

	for(int i=0; i<index; i++) {
		*(count + i) = base_num;
	}

	int result = 1;
	for(int i=0; i<index; i++) {
		result = result * (*(count+i));
	}

	return result;
}
