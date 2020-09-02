
#include <iostream>
#include <cstdio>

using namespace std;

class CData {
public :
	int data;
	int operator+=(const CData &rhs);
	operator double() {
		return data*100;
	}
};

int CData::operator+=(const CData &rhs) {
	this->data = this->data + rhs.data;
	return 0;
}
//int a = 10; double b = (double)a;


int main(void) {
	CData cdata;
	cdata.data = 10;
	//int result = cdata.operator+=(cdata);
	//result = (cdata += cdata);


	cout << cdata.data << endl;
	cout << (double)cdata << endl;
	
}


