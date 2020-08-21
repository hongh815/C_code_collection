

#include <cstdio>
#include <iostream>

using namespace std;

class CTest {
	int nData = 0;
public :

//	int nData;
	CTest(){ cout << "CTest::CTest()" <<  "  :  " << nData <<endl;};
	~CTest() { cout << "~CTest::CTest()" << nData << endl; };

	void setData(int& data) {
		nData = data;
	}
	int getData() {
		return nData;
	}
};



int main(void) {

	CTest cTest;
	int data = 10;
	cTest.setData(data);

	CTest *pCTest;
	pCTest = new CTest;
	data = 20;
	pCTest->setData(data);

	delete pCTest; //delete후에 포인터는 살아있지만, 포인터가 가리키는 곳은 접근불가, 딜리트로 소멸을 꼭 시켜줘야만 메모리를 많이 잡지 않는다.

	CTest *pCTest2;
	pCTest2 = new CTest;
	data = 30;
	pCTest2->setData(data);

	delete pCTest2; //delete후에 포인터는 살아있지만, 포인터가 가리키는 곳은 접근불가

// 동적메모리의 배열선언 부분₩
	CTest* parrCTest;
	parrCTest = new CTest[5];
	for(int i=0; i<5; i++) {
		cout << parrCTest[i].getData() << endl;
	}

	delete[] parrCTest;
}
