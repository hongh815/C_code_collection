#include <stdio.h>

int main(void)
{
    int baseball = 70;
    int person = 65;
    
    double per = (double)person / baseball;
        
    printf("입장률 : %.1lf %%\n", per*100);
}

