

#include <stdio.h>

int fact(int);

int main(void) {
	fact(5);
	printf("%d\n", fact(5));

	return 0;
}


int fact(int num) {
	printf("%d\n", num);
	if(num == 1){
		return 1;
	} else {
		return num * fact(num -1);
	}

}
