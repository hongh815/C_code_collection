

#include <iostream>

using namespace std;

class Circle {
	int radius;

public:
	
	Circle(int radius = 0) {
		this->radius = radius;
	}
	int getRadius() {
		return radius;
	}
	void setRadius(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14*radius*radius;
	}
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int radius, string name);
	void show();
	void setName(string);
};

void NamedCircle::setName(string name) {
	this->name = name;
}

NamedCircle::NamedCircle(int radius, string name) {
	setName(name);
	setRadius(radius);
}

void NamedCircle::show() {
	int radius = getRadius();
	cout << "원의 면적 : " << getArea() << endl;
	cout << "반지름이 " << radius << "인 " << name << endl;
}

int main(void) {

	NamedCircle waffle(3, "waffle");
	waffle.show();
}
