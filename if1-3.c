#include <stdio.h>



int main(void) {

	int tot = 259;

	double avg = (double)tot / 3;

	char grade;

	if (avg >= 90) {
		grade = 'A';
	}

	else if (avg >= 80) {

		grade = 'B';
	}
	else if (avg >= 70) {
		grade = 'C';
	}
	else {
		grade = 'F';

	}

	printf("평균: %.1lf 학점 : %c", avg, grade);

}


