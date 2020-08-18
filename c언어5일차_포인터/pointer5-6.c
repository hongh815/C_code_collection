

#include <stdio.h>

void print_grade(int*, int);

int main(void) {

	int score[5] = {  72, 88, 95, 64, 100  };

	print_grade(&score[0], 5);
}


void print_grade(int* ps, int size) {

	int stars;

	for(int i=0; i<size; i++) {
		stars = *(ps+i) / 5;
		printf("( %d ) ", *(ps + i));
		for(int j = 0; j<stars; j++) {
			printf("* ");
		}
		printf("\n");
	}
}
