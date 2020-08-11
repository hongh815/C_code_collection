#include <stdio.h>

int main(void)
{
    int time = 3.76 * 360;
        
    printf("3.76 시간은  %d 시간, %d 분, %d 초 입니다.",time/360, (time%360)/60,((time%360)%60)/1);
}

