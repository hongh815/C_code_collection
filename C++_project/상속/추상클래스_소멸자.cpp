

#include <iostream>

using namespace std;

class CMyData {
	char* data;
public :
	CMyData() { data = new char[20]; cout << "CMyData" << endl;}
	virtual ~CMyData() { delete[] data; cout << "~CMyData" << endl; }

};

class CMyDataEx : public CMyData {
public :
	int* dataEx;
	CMyDataEx() { dataEx = new int; cout << "CMyDataEx" << endl;}
	~CMyDataEx() { delete dataEx; cout << "~CMyDataEx" << endl;}
};


int main(void) {
//	CMyDataEx* cEx = new CMyDataEx;
	CMyData* cmydata = new CMyDataEx;   

			
			// 동적개체(*) 를 이용해서 호출할때 소멸자가 하나밖에 생기지 않고 이는 즉 메모리 누수를 뜻한다. 이를 막기 위한 방법은?
			// 바로 상위 클래스에 virtual을 넣어서 소멸자를 생성하게 되면 
			//CMyDataEx부분의 소멸자 호출 후에 virtual에 해당하는 소멸자도 호출되어 메모리 누수를 막아준다.
	
		// 443page 에 설명이 있다. 
	delete cmydata;
}
