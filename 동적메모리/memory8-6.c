

#include <stdio.h>

struct student
{
	int num;
	char name[20]; 
	int score[5]; 
	double avg;
};

double print_avg(int*);

int main(void) {

	struct student s1 = {315, "홍길동", {76, 56, 98, 90, 75},0};

	printf("학번 : %d\n", s1.num);
	printf("이름 : %s\n", s1.name);
	printf("점수 : %d %d %d %d %d", s1.score[0], s1.score[1], s1.score[2], s1.score[3], s1.score[4]);
	printf("평균 : %.1lf\n", print_avg(&s1.score[5]));

}

double print_avg(int* score) {
	int n;
	printf("%d", *score);
	printf("%d", *(score+1));
	printf("%d", *(score+2));
	printf("%d", *(score+3));
	printf("%d", *(score+4));

//	printf("과목들의 점수 입력 : ");
//	for(int i=0; i<5; i++) {
//		scanf("%d", &n);
//		*(score + i) = n;
//	}
	return (double)(*score + *(score+1) + *(score+2) + *(score+3) + *(score+4))/5;
}
