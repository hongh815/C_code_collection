#include <iostream>
#include <cstdio>

using namespace std;

class FormulaOne {

public :
	int speed;
	string driver;

	//리턴타입 operator 연산자(매개변수리스트)

	FormulaOne operator +(const FormulaOne& rhs) {
												// + 연산을 가능하게 해주는 함수		
		FormulaOne result;
		result.speed += rhs.speed + 20;
		result.driver = rhs.driver;

		return result;
	}
};
//int a = 10; double b = (double)a;


int main(void) {

	FormulaOne one;
	FormulaOne two;
	FormulaOne result;
	two.speed = 100;
	two.driver = "슈마허";

//	result = one.operator+(two);
	result = one + two;

	cout << result.speed << ", " << result.driver << endl;


}
