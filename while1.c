#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //true 사용가능하게 해주는 해더파일


int main(void)
{

	bool boResult = true;
	// 1 = true
	// 0 = false

//	while(true) {// 1 == true
//		printf("hello!!\n");	
//	}


//	do {
//		printf("hello \n");
//	} while(false); //무조건 한번은 실행을 시키는 명령문

	int i = 0;
	while(true) {
		printf("helllo \n");
		i++;
			if(i == 10) {
				break;
			}
	}
}
