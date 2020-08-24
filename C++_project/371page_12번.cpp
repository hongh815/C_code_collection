

#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;
class SortedArray {
	int size;
	int *p;
	void sort();

public :
	SortedArray() {
		size = 0;
		p = NULL;
	}
	SortedArray(SortedArray &src){
		int temp;
		

	}
	SortedArray(int p[], int size) {
		this->p = p;
		this->size = size;
	}
	~SortedArray() {
		delete[] p;
		cout << "deleted" << endl;
	}

	SortedArray operator +(SortedArray& op2);
	SortedArray& operator =(const SortedArray& op2);
	void show();
};

void SortedArray::show() {
	cout << "n" << p << endl;
}


int main(void) {

	int n[] = {2, 20, 6};
	int m[] = {10, 7, 8, 30};
	SortedArray a(n, 3), b(m, 4), c;

	c = a + b;

	a.show();
	b.show();
	c.show();

}
