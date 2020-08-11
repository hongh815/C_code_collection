#include <stdio.h>

int main(void)
{

    int dis;
    int spd;

    printf("거리와 속력 입력 : \n");
    scanf("%d %d",&dis, &spd);
    
    double t = (double)dis / spd;
    int time = t * 360;
    
    printf("소요 시간은  %d 시간, %d 분, %d 초 입니다.",time/360, (time%360)/60,((time%360)%60)/1);
    
}

