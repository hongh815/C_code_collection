

#include <cstdio>
#include <iostream>

//자신의 이름과 나이를 입력받고 “나의 이름은 홍길동이고, 20 살입니다.
//i”라고 출력하는 프로그램을 작성합니다. 단, 반드시 std::cout, std::cin 을 이용합니다.

int main() {

	std::string name;
	int age;
	std::cout << "이름 입력 : " << std::endl;
	getline(std::cin, name);
	std::cout << "나이 입력 : " << std::endl;
	std::cin >> age;

	std::cout << "나의 이름은 " << name  << "이고, 나이는 " << age << "살 입니다." << std::endl;

}

