

// extern 다른 파일의 전역변수를 사용할 수 있도록 설정
// static 현재 파일에서만 변수로 사용할 수 있도록 설정


#include <stdio.h>

//int input_data(void);
//int input_data2(void);
int* print_data(void);

int cnt = 0;
static int total = 0;

int  main(void) {

//	input_data();
//	input_data2();
//	printf("cnt : %d\n", cnt);
//	printf("total : %d\n", total);
	printf("x : %d\n", *print_data());
	return 0;
}


int input_data() {

	cnt++;
	total++;
}
