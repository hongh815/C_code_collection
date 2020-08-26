


#include <iostream>

using namespace std;

class Printer {
protected :
//	int pages;
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
public :
	Printer() {}
	Printer(int availableCount) {
		this->availableCount = availableCount;
	}
	void print(int pages) {
		this->availableCount -= pages;
	}

};

class InkJetPrinter : public Printer {
	int availableInk;
public :
	InkJetPrinter() : availableInk(10), Printer(5) {}
	void printInkJet(int pages) {
	}
};

class LaserPrinter : public Printer {
	int availableToner;
public :
	LaserPrinter() : availableToner(20), Printer(3) {}
	void printLaser(int pages) {
	}
};

int main(void) {


	cout << "현재 작동중인 2대의 프린터는 아래와 같다." << endl;

}
