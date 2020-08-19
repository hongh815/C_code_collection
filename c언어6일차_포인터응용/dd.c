#include <stdio.h>
 
int main() {
    int i,j;
    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    
    int(*pArr)[4] = arr;
     
    int row = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr[0]) / sizeof(arr[0][0]);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++)
            printf("%d ", pArr[i][j]);
        printf("\n");
    }

}
