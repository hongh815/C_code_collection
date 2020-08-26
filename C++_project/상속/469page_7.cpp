

#include <iostream>

using namespace std;



class Shape {
protected :
	int width, height;
	string name;
public :
	Shape() {}
	Shape(string name, int width, int height) {
		this->name = name;
		this->width = width;
		this->height = height;
	}
	virtual int getArea() = 0;
	string getName() {return name;}
};
class Oval : public Shape {
public :
	Oval(){}
	Oval(string name, int width, int height) {
		this->name = name; this->width = width; this->height = height;
	}
};
class Rect : public Shape {
public :
	Rect(){}
	Rect(string name, int width, int height) {
		this->name = name; this->width = width; this->height = height;
	}
};
class Triangular : public Shape {
public :
	Triangular(){}
	Triangular(string name, int width, int height) {
		this->name = name; this->width = width; this->height = height;
	}
};



int main(void) {
	Shape *p[3];
	p[0] = new Oval("빈대떡", 10, 20);
	p[1] = new Rect("찰떡", 30, 40);
	p[2] = new Triangular("토스트", 30, 40);
	for(int i=0; i<3; i++) {
//		cout << p[i]->getName() << "넓이는 " << p[i]->getArea() << endl;
	}

	for(int i=0; i<3; i++) { delete p[i]; }
}
