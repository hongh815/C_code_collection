
#include <stdio.h>

int main(void) {

	char string[][100] = {"senfslefkns", "sefnkenf", "efkenfe", "sefoefo", "efnekfnkefefe"};
	char (*pString)[];

	pString = string;

	printf("입력 : ");
	scanf("%s", *pString);

	printf("%s \n", pString[0]);
	printf("%ld \n", sizeof(pString[0]));
}
