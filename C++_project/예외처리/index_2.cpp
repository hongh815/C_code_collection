
#include <iostream>

using namespace std;

int main(void) {
	int a=10;
	int b=0;
	double c=1.0;
	int result;
	
//	if(b!=0) {  												*** 기존의 c 에서는 이렇게 예외처리를 했으나, 
//		result = a / b;
//	} else cout << "b값이 0입니다." << endl;
//
//	if(c!=0) {
//		result = a / c;
//	} else cout << "c값이 0입니다." << endl;

	try {

//		if(b==0) { // exception
//			throw b;  // 0; 이 값이 catch문의 int ex로 복사되어 넘어간다.
//		} else result = a / b;

		if(c==1.0) { // exception
			throw c;  // 0; 이 값이 catch문의 int ex로 복사되어 넘어간다.
		} else result = a / c;
	
	} catch(int ex) {
		cout << "값이 " << ex << " 입니다. (int형 예외처리)" << endl; // 그리고 출력됨.
	} catch(double exDou) {
		cout << "값이 " << exDou << " 입니다. (double형 예외처리)" << endl; // 그리고 출력됨.	
	}


	return 0;
}
