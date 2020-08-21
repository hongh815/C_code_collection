
#include <stdio.h>

int main(void){

	FILE* fp;
	FILE* fpw;
	double kg;
	double f;
	char str[20];

	fp = fopen("a2.txt", "r");	
	fscanf(fp, "%s", str);
	fscanf(fp, "%lf", &kg);
	fscanf(fp, "%lf", &f);

	double BMI = kg/(f*f/10000);
	fpw = fopen("b2.txt", "w+");
	fprintf(fpw, "이름 : %s BMI : %.1lf\n", str, BMI);
	fprintf(fpw, "체중 : %.1lfkg 키 : %.1lfcm\n", kg, f);

	fclose(fp);
	fclose(fpw);

	return 0;
}


