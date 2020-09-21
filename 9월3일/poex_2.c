
#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int ch;
	int i = 0;
	char* arr[i];
	arr[i] = (char*)malloc(sizeof(char) + 1);
	do {
		ch = getchar();
		arr[i] = (char*)realloc(arr ,sizeof(ch));
		i++;

	} while(ch != '.');

	for(int a=0; a<i; a++) {
		printf("%s ", arr[a]);
	}
}

