#include <stdio.h>



int main(void) {

	int rich = 150;

	double grade = 4.1;
	int s;
	int d = 100;
	int tot;
	if (rich >= 100 && grade >= 4.0) {
		s = d * 0.2;
	}
	else if (rich < 100) {
		s = d * 0.4;
	}
	tot = d - s;
	printf("다음 학기 납입할 등록금은 %d 만원입니다.", tot);
}
