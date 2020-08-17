

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int *pi;
	int size = 5;
	int cnt = 0;
	int num;

	pi = (int *)calloc(size, sizeof(int)); // 4 * 5 = 20byte 다섯개의 배열로 입력을 한다
	printf("초기 pi의 주소값 : %p\n", pi); //처음 주소값

	while(1) {
		printf("입력 : ");
		scanf("%d", &num);

		if(cnt < size) {
			pi[cnt++] = num;
		}
		else {
			size += 5;
			pi = (int *)realloc(pi, size*sizeof(int)); // 5개를 초과하게 되면 사이즈를 5개 늘려서 더 넣을수 있게 한다.
			pi[cnt++] = num;
			printf("realloc을 실행 한 후의 주소값 : %p\n", pi);
		}

		if(size == 15) {
			break;
		}
	}

	for(int i=0; i<size; i++) {
		printf("pi[%d] = %d\n", i, pi[i]);
	}
	free(pi);
}
