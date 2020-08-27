

#include <iostream>

using namespace std;

void Exception1() {

	int input = 0; // 1 ~ 10
  	cout << "1 ~ 10 까지 입력하시오. " << endl;
	cin >> input;



	if(input < 1 || input > 10) {
		throw input;
	}

}

void Exception2() {
	
	char input = 0; // A ~ E
  	cout << "A ~ E 까지 입력하시오. " << endl;
	cin >> input;



	if(input < 'A' || input > 'E') {
		throw input;
	}



}


int main(void) {


//--------- 이렇게 멀티 catch문을 쓸수도 있고,

	try {
		Exception1();
		Exception2();

	} 
	catch(int exInt) {
		cout << "ERROR : 1 ~ 10까지 정수를 입력하세요. " << endl;
	} 
	catch(char exChar) {
		cout << "ERROR : A ~ E까지 대문자를 입력하세요. " << endl;
	} 
	


//-------- 두 catch 문을 쪼개서 넣을수도 있고,	
	try {
		Exception2();
	} 
	catch(char exChar) {
		cout << "ERROR : A ~ E까지 대문자를 입력하세요. " << endl;
	} 



//-------- 이렇게 안에 넣을수도 있고,
	try {
		Exception1();
		
		try {
			Exception2();
		} 
		catch(char exChar) {
			cout << "ERROR : A ~ E까지 대문자를 입력하세요. " << endl;
		} 

	} 
	catch(int exInt) {
		cout << "ERROR : 1 ~ 10까지 정수를 입력하세요. " << endl;
	} 
}
