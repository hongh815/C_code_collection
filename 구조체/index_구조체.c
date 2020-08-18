

//구조체 : 다양한 변수의 집합
//				배열 포인터 변수 변수 구조체

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student { // 총 12byte --> 그러나 os의 설정에 따라서 8바이트 두개 16바이트를 잡고 int형에서 비는 4바이트 부분을 NULL값으로 잡을수 도 있다.
	int stu_num; // 4byte
	char gender; //1byte 추가 ( 변수를 잡는 순서에 따라서도 총 바이트가 24바이트가 될수도 16바이트가 될수도 있다. 순서를 잘 잡자. )
	double grade;  // 8byte
};

struct profile {

	char name[20]; //이름 --> 20byte
	int age;  		//나이 --> 4byte
	double height;	//키	--> 8byte
	char* intro;	//소개	--> 4byte
	struct student stu; //구조체 활용 --> 16byte
};


int main(void) {
	//구조체 선언 필수!

	struct student s1;
	struct student s2;
	struct profile s1_profile;

	s1.stu_num = 1;
	s1.grade = 3.55;
	strcpy(s1_profile.name, "hongBeom");
	s1_profile.age = 20;
	s1_profile.height = 184;
	s1_profile.stu = s1; //구조체 복사

	s1_profile.intro = (char *)malloc(80);
	printf("자기소개 : ");
	gets(s1_profile.intro);

	printf("stu_num : %d. grade : %lf\n", s1.stu_num, s1.grade);


	s2 = s1; //주소값을 복사한 것.


	printf("stu_num : %d. grade : %lf\n", s2.stu_num, s2.grade);
	printf("s1.name : %s, s1.age : %d, s1.height : %lf\n", s1_profile.name, s1_profile.age, s1_profile.height);	
	printf("s1.intro : %s\n", s1_profile.intro);

	printf(" %p, %p\n", &s1, &s2);
	printf("sizeof(s1) : %d byte\n", sizeof(s1));
	printf("sizeof(s2) : %d byte\n", sizeof(s2));
	printf("sizeof(s1_profile) : %d byte\n", sizeof(s1_profile));
	free(s1_profile.intro);
}


