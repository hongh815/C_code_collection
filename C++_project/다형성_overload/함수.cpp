
#include <cstdio>
#include <iostream>

using namespace std;

class CTest {
	int nData = 0;
public :

//	int nData;
	CTest(){ cout << "CTest::CTest()" <<  "  :  " << nData <<endl;};
	~CTest() { cout << "~CTest::CTest()  " << nData << endl; };

	void setData(int& data) {
		nData = data;
	}
	int getData() {
		return nData;
	}
};
	//함수부분 --> 참조변수가 설정되면 겉으로 표현하는 문이 같기때문에 주석처리해주겠다.
//void funcTest(CTest ct) {
//	cout << ct.getData() << endl;
//}

	// 포인터 함수부분
//void funcTest(CTest *ct) {
//	cout << ct->getData() << endl;
//}

	// referencetype 함수부분 (참조변수)
//void funcTest(CTest& ct) {
//	cout << ct.getData() << endl;
//}

template <typename T> //알아서 타입을 복사하여 맞춰주는 template!!
void funcTest(T ct) {
	cout << ct.getData() << endl;
}

int main(void) {
	CTest cT;
	CTest& refcT = cT;
			//템플릿 매개변수로 이렇게 참조변수를 넘기게 되면 일반변수처럼 출력이 된다. 소멸이 두번 된다는 것이다. 
			//메인의 cT와 함수의 ct가 복사 되기 때문에 두번 된다.
	funcTest(refcT);
}
