#include <stdio.h>

int main(void)
{
    double height, weight;
    
    printf("몸무게와 키 입력 : \n");
    scanf("%lf %lf", &weight, &height);
    double height_m = height / 100;
    double BMI = weight / (height_m * height_m);
    
    if(BMI>=20.0 && BMI < 25.0) {
        printf("표준입니다.");
    } else printf("체중관리가 필요합니다.");
}

