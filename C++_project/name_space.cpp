


#include <iostream>
#include <cstring>
#include <string>


using namespace std; //std를 빼도 되게끔 해주는 부분

int main() {

	//namespace 를 사용하여 std 없이 cin,  cout, endl등을 사용
	cout << "안녕하세요." <<endl;

	char str[30] = {"hello world"};
	cin >> str;
	cout << str << endl;

	string str2 = {"hollo world2"};
	cin >> str2;
	cout << str2 << endl;


	// c++을 입력하기 전까지 계속 반복 인풋하는 while문
	while (1) {
		cout << "input : ";
		cin >> str;

		if(strcmp(str, "c++") == 0) {
			cout << str << endl;
			break;
		}
		cout << str << endl;
	}
	
	// cArr이라는 배열을 받아 거기에 cin 하는 것.	
	char cArr[20];
	cin >> cArr;
	cout << cArr << endl;

	cin.ignore(); // 위에 혹시나 남아있을 쓰레기 값들을 지워주는 곳.

	// getline 을 사용해 보는 부분

	string name;
	char name2[20];

	cout << "Please, enter your full name : ";
	getline(cin , name);
	cout << "Hello, " << name << "!\n";

	cout << "Please, enter your full name : ";
	cin.getline(name2 , 10);
	cout << "Hello, " << name2 << "!\n";

	return 0;
}

