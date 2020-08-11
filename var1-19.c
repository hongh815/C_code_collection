#include <stdio.h>

int main(void)
{

    int dis;
    int spd;

    printf("거리와 속력 입력 : \n");
    scanf("%d %d",&dis, &spd);
    
    double t = (double)dis / spd;
		int tint = dis / spd;
		
    double min = (double)(t-tint)*60;
		int minint = (t-tint)*60;

		double sec = (double)(min-minint)*60;		
   
		printf("소요 시간은  %d 시간, %d 분, %.3lf 초 입니다.", tint, minint, sec);

}

