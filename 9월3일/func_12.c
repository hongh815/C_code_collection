#include <stdio.h>

int return_sixnum(int*);
int main(void) {
	int arr[6] = {0};
	int* parr;
	parr = arr;

	return_sixnum(parr);
	for(int i=0; i<6; i++) {
		printf("%d, ", arr[i]);
	}
}

int return_sixnum(int* parr) {
	printf("로또 번호를 입력하세요. >> \n\n");
	int cnt = 0;
	int i = 0;
	while(1) {
		while(gets("")) {
			printf("%d. ", (i+1));
			scanf("%d", (parr + i));
			i++;
		}
		printf("중복된 숫자가 존재합니다.\n");
	}
	return *parr;
}

