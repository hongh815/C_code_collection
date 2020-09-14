
#include <stdio.h>

int total_sum(int);

int main(void) {

	printf("%d\n", total_sum(100));

}

int total_sum(int x) {
	int sum = 0;

	for(int i=0; i<=x; i++) {
		sum += i;
	}

	return sum;
}


