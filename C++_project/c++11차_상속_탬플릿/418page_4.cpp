

#include <iostream>

using namespace std;

class Point{
	int x,y;
public:
	Point(int x, int y) {this->x = x; this->y = y;}
	int getX() {return x;}
	int getY() {return y;}

protected:
	void move(int x, int y) {this->x = x; this->y = y;}
};

class ColorPoint : public Point {

	string color;
public:
	ColorPoint() :
		Point(0, 0) {
			this->color = "BLACK";
		}
	ColorPoint(int x, int y, string color) : Point(x, y) {
		this->color = color;
	}
	void setPoint(int x, int y);
	void setColor(string color);
	void show();
};

void ColorPoint::setPoint(int x, int y) {
	move(x, y);
}
void ColorPoint::setColor(string color) {
	this->color = color;
}
void ColorPoint::show(){
	cout << color << " 색으로 " << "(" << getX() << ", " << getY() << ")" << " 에 위치한 점입니다. " << endl;
}

int main(void) {

	ColorPoint zeroPoint;
	zeroPoint.show();
	
	ColorPoint cp(5,5,"RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}
