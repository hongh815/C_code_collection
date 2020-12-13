#include <stdio.h>
#include <stdlib.h>
int main ()
{
/*  int c;
  puts ("Enter text. Include a dot ('.') in a sentence to exit:");
  do {
    c=getchar();
    putchar (c);
  } while (c != '.');
*/



    char string = malloc(sizeof(char) + 1);
  printf ("Insert your full address: ");
  gets (string);     // warning: unsafe (see fgets instead)
  printf ("Your address is: %s\n dataSIZE :: %ld\n",string, sizeof(string));





  return 0;
}
