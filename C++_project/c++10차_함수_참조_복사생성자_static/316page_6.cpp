

#include <iostream>
#include <cstdio>

class ArrayUtility2 {

	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int size, int& retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int* a = new int[size*2];

	for(int i=0; i<size; i++) {
		a[i] = s1[i];
	}
	for(int i=0; i<size; i++) {
		a[i+size] = s2[i];
	}

	return a;
}

int* ArrayUtility2::remove(int s1[], int size, int& retSize) {
	int* b = new int[size];
	retSize = size;
	for(int i=0; i<size; i++) {
		for(int j=0; j<size; j++) {
			if(s1[i] == s2[j]) {
				
			}
		}
	}

}


int main(void) {

}
