#include <stdio.h>

int main(void)

{
        int math, kor;


        printf("두 과목의 점수 입력 : ");
        scanf("%d %d", &math, &kor);
        float avg = (float)(math+kor)/2;        
        
        printf("\n평균 : %.1f\n", avg);

}
