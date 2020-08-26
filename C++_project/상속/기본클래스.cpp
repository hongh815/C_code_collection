

#include <iostream>

using namespace std;

class Point {
private :
	int x,y;
public :
	Point() {
		cout << "Point()" << endl;
	}
	~Point() {
		cout << "~Point()소멸" << endl;
	}
	void set(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void showPoint() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

class ColorPoint : public Point {//상속 : 접근제한자 상속클래스명

	string color;
public :
	ColorPoint() {
		cout << "ColorPoint()" << endl;
	}
	~ColorPoint() {
		cout << "~ColorPoint()소멸" << endl;
	}
	void setColor(string color) {
		this->color = color;
	}
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << endl;
//	cout << x << ", " << y << endl; private으로 묶여있으니 상속을 해도 되지 않는다.
	showPoint(); //그래서 public으로 열려있는 함수를 이용한다.
}

int main(void) {
	Point p;
	p.set(1,2);
	p.showPoint();

	ColorPoint cp;

	cp.set(3,4);
	cp.setColor("black");
	cp.showPoint();
	cp.showColorPoint();
}
