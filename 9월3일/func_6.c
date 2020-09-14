#include <stdio.h>

int total(int kor, int eng, int mat); 
double average(int tot);
void print_title(void);

int main(void) {
	print_title();
}

int total(int kor, int eng, int mat) {
	int tot = kor + eng + mat;	
	return tot;
}
double average(int tot) {
	double avg = (double)tot/3;
	return avg;
}
void print_title(void) {
	int kor, eng, mat;
	printf("# 세 과목의 점수 입력. >>\n\n");
	printf(" (1). 국어 : "); scanf("%d", &kor);
	printf(" (2). 수학 : "); scanf("%d", &mat);
	printf(" (3). 영어 : "); scanf("%d", &eng);
	int tot = total(kor, eng, mat);
	double avg = average(tot);

	printf("\n\n\t===== < 성적표 > =====\n\n");
	printf("   ----------------------------------\n");
	printf("       국어 수학 영어 총점 평균\n");
	printf("   ----------------------------------\n");
	printf("       %2d   %2d   %2d   %2d   %.1lf\n", kor, mat, eng, tot, avg);

}
