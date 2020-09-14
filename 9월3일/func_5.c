#include <stdio.h>

int disp_menu();
int main(void) {
	int sel;
	sel = disp_menu();

	printf("선택된 메뉴는 %d 번 메뉴입니다.\n", sel);
}

int disp_menu() {

	int number;
	printf("#메뉴를 선택하시오. >> \n\n (1). 짜장면\n (2). 짬뽕\n (3). 탕수육\n\n#번호선택 : ");
	scanf("%d", &number);

	return number;
}


