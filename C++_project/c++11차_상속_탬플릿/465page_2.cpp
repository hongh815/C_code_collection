

#include <iostream>
#include <cstring>

using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src)=0;
	virtual string getSourceString()=0;
	virtual string getDestString()=0;
public :
	Converter(double ratio) { this->ratio = ratio; }
	
	void run() {
		double src;
		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
		cout << getSourceString() << "을 입력하세요>> ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollar : public Converter {

public:
	WonToDollar(int x) : Converter(x) {}
	virtual double convert(double src) {
		double dollar = src / ratio;
		return dollar;
	}
	virtual string getSourceString() {
		return "원";
	};
	virtual string getDestString() {
		return "달러";
	};
};

class KmToMile : public Converter {

public:
	KmToMile(double km) : Converter(km) {}
	virtual double convert(double src) {
		double dollar = src / ratio;
		return dollar;
	}
	virtual string getSourceString() {
		return "Km";
	};
	virtual string getDestString() {
		return "Mile";
	};	
};

int main(void) {

	KmToMile toMile(1.609344); 
	toMile.run();
}


