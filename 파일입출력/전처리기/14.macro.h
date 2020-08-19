#pragma once
#include <stdio.h>

void func(void);


void func() {
	printf("--------------------------\n");
	printf("파일명 : %s\n", __FILE__);
	printf("함수명 : %s\n", __FUNCTION__);
	printf("행번호 : %d\n", __LINE__);
}
