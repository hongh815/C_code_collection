// 240페이지 참조하자...
#include <cstdio>
#include <iostream>

using namespace std;

class CTest {

	int nData = 0;
	int nCount = 0;
	
	CTest(int num, int num2) {
		nData = num;
		nCount = num2;
		
	}

	CTest(const CTest& c) {
		this->nData = c.nData;
	}

};



int main(void) {
	int a= 1;
	int b(a);
	int c(3);

	CTest ctest(3);
	CTest ctest2 = ctest;

	CTest ctest3(ctest);

	cout << ctest3.nData << ", " << ctest3.nCount << endl;
}

