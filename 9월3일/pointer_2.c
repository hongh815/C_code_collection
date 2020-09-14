#include <stdio.h>


void swap(double*, double*);
void line_up(double*, double*, double*);
int main(void) {
	double a,b,c;

	printf("## 실수 세개 입력 : >>\n\n");
	line_up(&a, &b, &c);
//	printf("%lf %lf %lf", a, b, c);
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", a, b, c);


}
void swap(double* Big, double* Small) {
	double temp;
//	printf("%lf %lf\n", *Big, *Small);
	if(*Big < *Small) {
		temp = *Big;
		*Big = *Small;
		*Small = temp;
	}
//	printf("%lf %lf\n", *Big, *Small);
}
void line_up(double* MAX, double* MID, double* MIN) {
	scanf("%lf", MAX);
	scanf("%lf", MID);
	scanf("%lf", MIN);
	double arr[3];
	arr[0] = *MAX;
	arr[1] = *MID;
	arr[2] = *MIN;
	for(int i=0; i<3; i++)for(int j=0; j<2; j++) {
		swap(&arr[j], &arr[j+1]);
	}
	*MAX = arr[0];
	*MID = arr[1];
	*MIN = arr[2];
//	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", *MAX, *MID, *MIN);
//	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", arr[0], arr[1], arr[2]);

}
