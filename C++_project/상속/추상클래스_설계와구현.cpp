

#include <iostream>

using namespace std;


// 추상클래스
class Abstract {

public :
	virtual int getData() = 0;						// geter, seter  선언 // 추상메서드 = 추상함수
	virtual void setData(int param) = 0;
};
// -------------------------- 객체를 만들지 못한다.


class Real : public Abstract {
	int nData;
public :
	virtual int getData();			 //선언	// 여기서 진짜 클래스 느낌으로 정의를 해야 추상클래스가 되는 것을 막을 수 있다.
	virtual void setData(int param);

};

int Real::getData() { return nData; }
void Real::setData(int param) { nData = param; }	// 이렇게 정의해야 추상클래스가 아니게 된다.

										// 이렇게 추상클래스를 사용함으로써 설계와 구현을 나눌수 있게 된다.

int main(void) {
// Abstract abs; 이렇게 객체를 만들지 못한다.

	Real real;  // 이렇게 구현하면 객체를 만들수 있게 된다.
}
