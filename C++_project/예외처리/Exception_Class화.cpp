

#include <iostream>
#include <cstring>
using namespace std;

class MyException {
	int errorCode;
	char errorMessage[120];

public:

	MyException(int _errorCode, const char* _errorMessage) {
		errorCode = _errorCode;
		strcpy(errorMessage, _errorMessage);
	}

	int getErrCode() {
		return errorCode;
	}
	char* getErrMessage() {
		return errorMessage;
	}
};

class DivideByZeroException : public MyException {
public:
	DivideByZeroException(int _errorCode, const char* _errorMessage):
		MyException(_errorCode, _errorMessage) {
			cout << "DivideByZeroException()" << endl;
		}
};

int main(void) {
	try{

		int input;
		cout << "1~10까지 정수를 입력하시오. :  ";
		cin >> input;
	
		if(input == 0) {
			DivideByZeroException dzexp(2, "0은 입력할수 없습니다.");
			throw dzexp;
		}

		if(input < 1 || input > 10) {
			MyException exp(1, "정확한 입력을 하시길 바랍니다.(1~10)");
			throw exp; 
		}


		cout << " ------------------------- " << endl;

	}
	catch(MyException &exp) {
		cout << "ERROR CODE : " << exp.getErrCode() << endl;
		cout << "ERROR MESSAGE : " << exp.getErrMessage() << endl;
	
	}
	catch(DivideByZeroException &dzexp) {
		cout << "ERROR CODE : " << dzexp.getErrCode() << endl;
		cout << "ERROR MESSAGE : " << dzexp.getErrMessage() << endl;
	}
}
