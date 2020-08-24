


//++++ ------ 여러가지 다형성을 통해 사용되는 funcA를 표현해보았고 template이 가장 추천할 만한 것이다.
//++++ ------ define, int Overload, int값 두개 잡기 모두 다 허용되고 사용되는 것이나 c++ 에 가장 최신은 template이다.

#include <cstdio>
#include <iostream>

//#define funcA(a) (printf("%d", a))

using namespace std;

	//Over Load
//int funcA(int a) {
//	cout << a << endl;
//
//	return a;
//}

typedef struct student {

	int num;
	double height;

	//C++ 에서는 구조체 안에 함수를 쓸수 있게 해주었다. 클래스랑 비슷한 면이 많아짐.
	int funcA(int a) {
		printf("%d", a);
	}

} Student;

class Student {
	public :
		int num;
		double height;

		int funcA(int a) {
			printf("%d", a);
		}
}


//int funcA(double b) {
//	cout << b << endl;
//
//	return b;
//}

//int funcA(int a,  int b) {
//	cout << a << endl;
//
//	return a;
//}

template <typename T> //여러 매개변수를 모두 알맞은 형태로 바꾸어서 출력해주는 것
T funcA(T a) {
	cout << a << endl;

	return a;
}



int main(void) {
	funcA(10);
	funcA(10.5);

	Student s = {1, 10.1};
}
