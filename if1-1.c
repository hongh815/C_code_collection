
#include <stdio.h>

int main(void)
{
    double height, weight;
    printf("키와 몸무게 입력 : \n");
    scanf("%lf %lf", &height, &weight);
    
  if(height >= 187.5 && weight < 80) {
      printf("ok");
  }  else printf("cancel");
  
  return 0;
}

