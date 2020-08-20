

#include <iostream> //cout과 << 연산자 들어있는 헤더파일


int power(int);

int main() {

	std::cout << "Hello\n"; //화면에 헬로를 출력하고 행을 넘어감
	std::cout << "World\n";
	std::cout << "첫 번째 맛보기입니다.\n";

	int intData = 20;
	std::cout << 10 << std::endl;
	std::cout << 10.23f << std::endl;
	std::cout << 3 + 4 << std::endl;
	std::cout << intData << std::endl;

	std::string strData = "Test String"; //string이라는 클래스 안에 strData라는 변수를 집어넣어서 Test String을 입력한 것
	std::cout << "Test Sample" << std::endl;
	std::cout << strData << std::endl;

// ----------- ------ ----- --  cout 연습 ---------

	int nData;
	std::cout << "Enter intput int data" <<std::endl;
	std::cin >> nData;


	std::cout << "Enter intput string" <<std::endl;
	std::cin >> strData;

	std::cout << nData << " , " << strData << std::endl;

	// --------------------- cin 연습 -----------------
	std::cout << power(nData) <<std::endl;


	return 0;
}


int power(int num) {
	return num * num;
}
