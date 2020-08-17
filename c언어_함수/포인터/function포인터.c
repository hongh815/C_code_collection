
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void arrayPtr(int (*)[4]);

void arrayPtr2(int *);

int main(void)
{


	int ary[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};


	//포인터 어레이
	int *pArr[3];
	pArr[0] = ary[0];
	pArr[1] = ary[1];
	pArr[2] = ary[2];
	
	//어레이 포인터
	int (*aPtr)[4];


	arrayPtr(ary);
	printf("\n");

	arrayPtr2(ary);
	printf("\n");

	arrayPtr2(ary[1]);
	printf("\n");
	return 0;
}

void arrayPtr2(int *ptr) {
   for(int i=0; i < 12; i++) { 
		printf("%2d", *(ptr+i));
		printf("\n");
       }
}

void arrayPtr(int (*arrPtr)[4]) {


        for(int i=0; i < 3; i++) {
                for(int j =0; j < 4; j++) {
                        printf("%2d", arrPtr[i][j]);
                }

                        printf("\n");
        }

}
