

#include <cstdio>
#include <iostream>

//#define Pi (3,14) //파이를 디파인해서 설정


using namespace std;

static const double Pi = 3.14; // 외부에서 사용 불가하고(static) 변하지 않는(const) 더블형 pi 선언 위의 디파인과 비교하여 하나만 쓴다.

class Circle {
//	int radius; // private상태
public :
	// 멤버 변수 => 필드, 속성, 변수
	int radius;
	Circle() : radius(1) {
		cout << "<< constructor >>\n";
	}; // private, radius(1) == radius를 1로 초기화한다는 의미, int radius = 1; 로 해서 초기화 해도 된다. 이게 제일 빠르다.
	Circle(int r) { radius = r; }; // 생성자 :: 무조건 초기화 목적, 생성자 다형성 :: Overload

	// 멤버 함수 => method 
	double getArea() {
		return Pi * radius * radius;
	}
	~Circle() {
		cout << "<< distructor >>\n";
	} //소멸자 따로 쓰지 않더라도 클래스 안에서 자동 생성된다.
};


int main(void) {
//객체포인터 -----------------
	Circle donut; //인스턴스
	Circle* pDonut; //객체 포인터

	pDonut = &donut; //pDonut에 donut의 주소값이 넘어간다.

	cout << (*pDonut).radius << endl;
	cout << pDonut->radius << endl;

	cout << (*pDonut).getArea() << endl;
	cout << pDonut->getArea() << endl;

//객체배열 -------------------

	Circle cirvleArr[4] {Circle(), Circle(), Circle(), Circle()};
	Circle* cirvlePtr;

	for(int i=0; i<4; i++) {
		cirvleArr[i].radius = i;
	}

	for(int i=0; i<4; i++) {
		cirvlePtr =	&cirvleArr[i];
		cirvlePtr->radius = i;
	}

	int i=0;
	for(Circle circle : cirvleArr) {
		circle.radius = i;
		i++;
	}
	
	i=0;
	for(auto circle : cirvleArr) {
		circle.radius = i;
		i++;
	}
// ==== 같은 의미의 네가지 for문을 열어서 출력을 해보는 부분
}
