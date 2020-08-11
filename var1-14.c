#include <stdio.h>

int main(void)
{
  printf("자료형 크기(long) : %d\n", sizeof(long));
  printf("자료형 크기(short) : %d\n", sizeof(short));
  
  if(sizeof(long) > sizeof(short)) {
      printf("long");
  } else printf("short");
}

