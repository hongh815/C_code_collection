#include <stdio.h>

int main(void) {
    int *parr[5];
    
    for(int i=0; i<4; i++) {
        for(int j=0; j<5; j++) {
            *parr[j] = scanf("%d", &j);
        
            printf("%3d", parr[i][j]);
        }
        printf("\n");
    }
}

