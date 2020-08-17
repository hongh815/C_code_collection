

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,n;
  char * buffer;

  printf ("How long do you want the string? ");
  scanf ("%d", &i);

  buffer = (char*) malloc (i+1);
  if (buffer==NULL) exit (1);

  for (n=0; n<i; n++)
    buffer[n]=rand()%26+'a';
  buffer[i]='\0';

  printf ("Random string: %s\n",buffer);
  free (buffer); //동적할당은 자동으로 반환되지 않으므로 free로 수동으로 반환한다.

  return 0;
}
