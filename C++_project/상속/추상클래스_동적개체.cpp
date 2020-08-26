

#include <iostream>

using namespace std;

class A {
public :
	virtual void printA() {
		cout << "A::printA()" << endl;
	}
};

class B : public A {
public :
	virtual void printA() {
		cout << "B::printA()" << endl;
	}
	void printB() {
		cout << "B::printB()" << endl;
	}

};


int main(void) {

	A a;
	B b;

	a.printA();
	b.printA();

	a = b;  //타입 :: A , 실제 :: A
	a.printA();  // virtual을 사용햇지만 아직 a는 그대로 이다 이것은 포인터가 여전히 같은 곳에 머물러 있기 때문이다.

	A& ab = b; //타입 :: A , 실제 :: B
	ab.printA(); // 이제 참조변수로 포인터를 잡아서 옮기기 때문에 A타입임에도 불구하고 B클래스의 printA함수가 나오게 된다.
						// 이것을 추상클래스라고 한다.


	cout << "--------------------" << endl;
	A* pa;
	pa = &a;
	pa->printA();

	B* pb;
	pb = &b;
	pb->printA();

	pa = pb;
	pa->printA();

}
