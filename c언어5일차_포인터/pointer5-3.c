

#include <stdio.h>

void rotate (int *pa, int *pb, int *pc);

int main(void) {

	int a,b,c;
	a=1;
	b=2;
	c=3;

	rotate(&a, &b, &c);

}

void rotate (int *pa, int *pb, int *pc) {
	
	int count = 0;
	int nn[5] = {*pa , *pb, *pc, *pa, *pb};
	
	do { 
			for(int i=0; i<3; i++) {	
				printf("%d : %d : %d\n", nn[i], nn[i+1], nn[i+2]);
			}
			count++;
			if(getchar() == '\n') break;
	} while(1);
	printf("\n%d", count);
}
