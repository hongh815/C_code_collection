

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	int stu_num;
	char stu_name[20];
	int age;
	double height;
	char *address;
};

int main(void) {
	FILE* fp;
	struct student s;

	fp = fopen("student.txt", "a");
	if(fp == NULL) {
		printf("파일을 만들지 못했습니다.");
		return 1;
	}

	while(1) {

		printf("학번 : ");
		scanf("%d", &s.stu_num);
		if(s.stu_num < 0) {
			break;
		}
		printf("이름 : ");
		fgets(s.stu_name, 20, stdin);
		printf("나이 : ");
		scanf("%d", &s.age);
		printf("키 : ");
		scanf("%lf", &s.height);

		s.address = (char*)malloc(100);
		printf("주소 : ");
		fgets(s.address, 80, stdin);

//		fp = fopen("student.txt", "a");
		fputc(s.stu_num, fp);	
		fputs(s.stu_name, fp);
		fputc(s.age, fp);
		fputc(s.height, fp);
		fputs(s.address, fp);
		
	}
	
	fclose(fp);

	return 0;

}
