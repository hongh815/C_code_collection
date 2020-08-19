

#include <stdio.h>
#include "14.macro.h"


int main(void) {

	printf("날짜, 시간 : %s, %s\n", __DATE__, __TIME__);
	printf("파일명 : %s\n", __FILE__);
	printf("함수명 : %s\n", __FUNCTION__);
	printf("행번호 : %d\n", __LINE__);
	
	func();
	return 0;
}

