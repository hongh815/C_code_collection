
#include <stdio.h>

int main(void)

{
        int math, kor, eng;
        float math_g, kor_g, eng_g;
        
        printf("국어 학점\n");
        scanf("%d %f", &kor, &kor_g);
        printf("영어 학점\n");
        scanf("%d %f", &eng, &eng_g);
        printf("수학 학점\n");        
        scanf("%d %f", &math, &math_g);

        printf("국어 %d 학점 %.1f\n", kor, kor_g);
        printf("영어 %d 학점 %.1f\n", eng, eng_g);
        printf("수학 %d 학점 %.1f\n", math, math_g);
    
	      if(math + kor + eng >= 10) {
          float grade = (math_g+ kor_g + eng_g)/3;
          if(grade >= 4.0) {
            printf("1");
          }else printf("0");
     	 }
}
