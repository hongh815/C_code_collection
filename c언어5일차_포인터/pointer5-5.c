
#include <stdio.h>

void reverse(ary,sizeof(ary)/sizeof(*ary));

int main(void) {
	double ary[] ={1.5, 20.1, 16.4, 2.3, 3.5};

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
