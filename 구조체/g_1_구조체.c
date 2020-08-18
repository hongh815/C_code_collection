

#include <stdio.h>


struct student { // 총 12byte --> 그러나 os의 설정에 따라서 8바이트 두개 16바이트를 잡고 int형에서 비는 4바이트 부분을 NULL값으로 잡을수 도 있다.
	int stu_num; // 4byte
	char gender; //1byte 추가 ( 변수를 잡는 순서에 따라서도 총 바이트가 24바이트가 될수도 16바이트가 될수도 있다. 순서를 잘 잡자. )
	double grade;  // 8byte
};

struct student printStudent(struct student);
void changeStudent(struct student*);

int main(void) {

	struct student s1 = {1, 'm', 0.0};   // 구조체 초기화
	printf("%d %c %lf\n", s1.stu_num, s1.gender, s1.grade);

 	struct student s2 ={1, 'm', 0.0}; 
 	struct student s3 ={1, 'm', 0.0}; 
 	struct student s4 ={1, 'm', 0.0}; 	

	printf("%d %c %lf\n", s2.stu_num, s2.gender, s2.grade); //여러가지 구조체의 초기화
	printf("%d %c %lf\n", s3.stu_num, s3.gender, s3.grade);
	printf("%d %c %lf\n", s4.stu_num, s4.gender, s4.grade);

	struct student s[4] = { {1, 'm', 0.0},  //배열구조체의 초기화
									{1, 'm', 0.0},
									{1, 'm', 0.0},
									{1, 'm', 0.0} };
	
	for(int i=0; i<4; i++) {
		printf("%d %c %lf\n", s[i].stu_num, s[i].gender, s[i].grade);
	}

	struct student sarr[4] = {0};
	for(int i=0; i<4; i++) {
		printf("%d %c %lf\n", sarr[i].stu_num, sarr[i].gender, sarr[i].grade);
	}

	s1 = printStudent(s1);
	changeStudent(&s1);
	printStudent(s1);


}

struct student printStudent(struct student stu) {

		stu.stu_num = 10;
		stu.gender = 'i';
		stu.grade = 1.5;

		printf("%d %c %lf\n", stu.stu_num, stu.gender, stu.grade);

		return stu;
}

void changeStudent(struct student* pStu) {

		(*pStu).stu_num = 12;
		(*pStu).gender = 'g';
		(*pStu).grade = 1.5;
}

