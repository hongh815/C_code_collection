

#include <iostream>

using namespace std;

int main(void) {


	int a = 10;
	int b(a); //int b = a; 와 같은 문장

	auto c(b); // c = b (int)

	cout << b << endl;
	cout << c << endl;

	//c++ 의 동적메모리 부분
	int *d = (int *)malloc(sizeof(int)); //4byte
	*d = 20;
	int *e = new int;
	*e = 30;

	cout << *d << ", " << *e << endl;
	free(d);
	delete(e);

	//c++ 배열부분
	int *f = new int[5];
	for(int i=0; i<5; i++) {
		f[i] = i + 1;
		cout << f[i] << endl;
	}

	delete[] f; //배열로 잡았으면 이렇게 delete를 잡아야 한다.

	//Reference Type
	int g = 10;
	int * pg = &g;
	cout << *pg << endl;

	cout << g << endl;
	int& rg = g; //레퍼런스 타입으로 g를 가리키면, 위처럼 기존의 포인터로 간접참조로 사용하여 헷갈렷던 부분들이 쉽게 해결된다.
	cout << rg << endl;
}
