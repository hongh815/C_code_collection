

#include <iostream>

using namespace std;


class Average {
	int errorCode;
	string errorMsg;

public:
	Average(int errorCode, string errorMsg);
	int  getErrorCode() {
		return errorCode;
	}
	string getErrorMsg() {
		return errorMsg;
	}	
};

Average::Average(int errorCode, string errorMsg) {
	this->errorCode = errorCode;
	this->errorMsg = errorMsg;
}


int main(void) {
	int n, sum, avg;
	while(true) {
		cout << "합을 입력하시오. >> ";
		cin >> sum;
		cout << "인원수를 입력하시오. >> ";
		cin >> n;

		try{
			if(n <= 0) throw n;
			else avg = sum / n;
		}
		catch(int ex) {
			Average exp(1, "알맞은 인원수를 기입하세요. 프로그램을 종료합니다.");
			cout << "ERROR CODE : " << exp.getErrorCode() << endl;
			cout << "ERROR MSG : " << exp.getErrorMsg() << endl;
			break;
		}

		cout << "평균 = " << avg << endl << endl;
	}

}
