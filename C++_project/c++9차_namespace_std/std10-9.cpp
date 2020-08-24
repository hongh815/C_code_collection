
//문자열 정보를 내부에 저장하는 Printer 라는 이름의 클래스를 디자인하자. 이 클래스의 두 가지 기능은 다음과 같다.
// 문자열저장  문자열출력
//main 함수와 실행의 예에 부합하는 Printer 클래스를 정의하되, 멤버 변수는 private 으로,
//멤버함수는 public 으로 선언하자.

#include <cstdio>
#include <iostream>

using namespace std;

class Printer {

	string str; 
	public :
		Printer() {};
		void SetString(const string& sentence) {
			this->str = sentence;
		}
		void ShowString();	
};

void Printer::ShowString() {
	cout << str << endl;
}

int main(void) {

	Printer pnt;

	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();

	
	return 0;
}
