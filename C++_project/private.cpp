


#include <iostream>

using namespace std;

class Access {  // private, public, protected
	private :
		int num;

	public :
		int getNum() {
			return num;
		}
		void setNum(int _num) {
			num = _num;
		}							// ---------->> geter, seter C++ 버전으로 한 것.

		Access() {};
		Access(int num) {};
		~Access() {};
};

int main(void) {

	Access access; //메모리 알아서 넣어준다. class Access에 맞게.
	Access access2(10);
	access.setNum(20);

	cout << access.getNum();
}
