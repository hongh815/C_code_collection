

#include <iostream>
#include <cstring>

using namespace std;

class LoopAdder {
protected:
	string name;
	int x, y, sum;
	void read();
	void write();

protected : 
	LoopAdder( string name="") {
		this->name = name;
	}
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0;
public : 
	void run();
};

void LoopAdder::read() {
	cout << name << ":" << endl;
	cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
	cin >> x >> y;
}

void LoopAdder::write() {
	cout << x << "에서 " << y << "까지의 합 = " << sum << " 입니다" << endl;
}

void LoopAdder::run() {
	read();
	sum = calculate();
	write();
}

class WhileLoopAdder : public LoopAdder {

public:
	WhileLoopAdder(string name) : LoopAdder(name) {}
	int calculate();
};

int WhileLoopAdder::calculate() {
	
	int ax = getX();
	
	while(ax == getY()) {
		sum += ax;
		ax++;

		return sum;
	}
}

class DoWhileLoopAdder : public LoopAdder {

public:
	DoWhileLoopAdder(string name) : LoopAdder(name) {}
	int calculate();
};

int DoWhileLoopAdder::calculate() {
	int ax = getX();
	do {
		sum += ax;
		ax++;

		return sum;
	} while(ax == getY());
}

int main(void) {

	WhileLoopAdder whileloop("While Loop");
	DoWhileLoopAdder dowhileloop("Do while Loop");

	whileloop.run();
	dowhileloop.run();
}
