

#include <iostream>

using namespace std;

class Interface {
	protected:
		int data; //정보공유 창구
	public:
		virtual int getData() = 0;  // 추상클래스를 사용함으로써 A와 B에 각각 다른 값이 구현되게 할 수 있다.
		virtual ~Interface() {} 	// 소멸자를 virtual로 함으로써 혹시모를 메모리 누수를 막는다.

};

class A : public Interface {
	public:
		A(int param) {data = param;}
		virtual int getData() {
			cout << "A::getData  ";
			return data;
		}
};
class B : public Interface {
	public:
		B(int param) {data = param;}
		virtual int getData() {
			cout << "B::getData  ";
			return data;
		}
};

void printData(Interface& interface) {
	cout << interface.getData() << endl;

}

int main(void) {

	A a(5);
	B b(10);

	::printData(a); // ::전역변수를 호출하는 것
	::printData(b);
}
