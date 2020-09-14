
#include <stdio.h>


int prime_check(int);

int main(void) {
	int result;
	int x;
	

	printf("소수확인법 : ");
	scanf("%d", &x);
	result = prime_check(x);
	
	if(result == 1) {
		printf("\n소수\n");
	} else printf("\nNOT소수\n");
}

int prime_check(int num) {
	int prime = 0;
	int cnt = 0;
	for(int i=1; i<num; i++) {
		if(num%i == 0) cnt++;
	}
	if(cnt == 1) prime=1;
	else prime=0;

return prime;
}

