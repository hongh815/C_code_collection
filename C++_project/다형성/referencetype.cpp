

#include <cstdio>
#include <iostream>

using namespace std;

class CTest {// 인스턴스
	int nData = 0;
	int& refData = nData;

public : //	참조변수는 무조건 초기화 해줘야한다. 생성자 시작하기 전에 
	CTest() : refData(nData) {
//		refData = nData;
	};

	void print(int nData) {
		this->nData = nData;
		cout << this->nData << endl;
	}
};

int main(void) {
	CTest ctest;
}
