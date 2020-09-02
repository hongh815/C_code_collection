


#include <iostream>

using namespace std;

class Circle 

{
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

class NamedCircle : public Circle 

{
	string name;
public:
	NamedCircle();
	NamedCircle(int radius, string name);
	void show();
	string getName();
	void setName(string);
};

void NamedCircle::setName(string name) {
	this->name = name;
}

string NamedCircle::getName() {
	return name;
}

NamedCircle::NamedCircle(int radius, string name) {
	setName(name);
	setRadius(radius);
}

NamedCircle::NamedCircle() {}

void NamedCircle::show() {
	int radius = getRadius();
	cout << "원의 면적 : " << getArea() << endl;
	cout << "반지름이 " << radius << "인 " << name << endl;
}

int main(void) {
	NamedCircle pizza[5];
	int radius;
	string str;

	cout << "5개의 정수 반지름과 원의 이름을 입력하세요. " << endl << endl;
	for(int i=0; i<5; i++) {
		cout << i+1 << " >> ";
		cin >> radius >> str;
		pizza[i].setRadius(radius);
		pizza[i].setName(str);
	}

	double max = pizza[0].getArea();
	str = pizza[0].getName();

	for(int i=0; i<5; i++) {
		if(pizza[i].getArea() > max) {
			max = pizza[i].getArea();
			str = pizza[i].getName();
		}
	}
	
	cout << "\n가장 면적이 큰 피자는 " << str << " 입니다." << endl;
}
