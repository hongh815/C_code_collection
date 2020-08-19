

#include <stdio.h>

int main(void) {


    /* fscanf example */
  char str [80];
  float f;
  FILE * pFile;

  pFile = fopen ("myfile.txt","w+");
  fprintf (pFile, "%f %s", 3.1416, "PI"); //파일에 찍어주는 fprintf
  rewind (pFile); //출력문의 커서를 다시 맨앞으로 옮겨주는 역할


  fscanf (pFile, "%f", &f);
  fscanf (pFile, "%s", str);

  fclose (pFile);
  printf ("I have read: %f and %s \n",f,str);
  return 0;

}
