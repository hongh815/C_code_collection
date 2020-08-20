

#include <stdio.h>

struct craker {
	int price;
	int kcal;
};

int main(void) {
	struct craker c1 = {0, 0};

	printf("크런치의 가격과 열량을 입력하세요 : ");
	scanf("%d %d", &c1.price, &c1.kcal);

	printf("\n\n크런치의 가격 : %d원\n크런치의 열량 : %dkcal\n", c1.price, c1.kcal);
}
