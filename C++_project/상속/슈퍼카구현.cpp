

#include <iostream>

using namespace std;


class Horse {
public :
	Horse(string name, string master) {
		this->master = master;
		this->name = name;
	}
	string name;
	string master;

	virtual void run() { //virtual :: 가상으로 무언가와 연결하는 거러 -->> Car 클래스에 오버라이드 되어 있는 run과 연결되어 있다.
		cout << "말이 달린다" << endl;
	}
};

class Car : public Horse {
public :
	Car() : Car("현대") {}
	Car(string company) : Horse("sonata", "jack") {
		this->company = "현대";
	}
	string company;
	void run_back() {
		cout << "차가 뒤로  달린다" << endl;
	}
	virtual void run() {// 오버라이딩 :: 대신쓰기
		cout << "차가 달린다." << endl;
	}
	void stop() {
		cout << "차가 멈춘다. " << endl;
	}
};

class SuperCar : public Car {
public :
	SuperCar() : Car("람보르기니") {}
	void hyper_run() {
		cout << "차가 엄청 빨리 달리기 시작한다." << endl;
	}
};


int main(void) {
	SuperCar supercar;
	supercar.hyper_run();
	supercar.run();
	supercar.run_back();
	supercar.stop();

	cout << "--------------------" << endl; 
	Car car;
	car.run();
	car.run_back();
	car.stop();
	cout << "--------------------" << endl;

	Horse horse("mike", "enf");
	horse.run();

	cout << "--------------------" << endl;
	Horse& horse2 = supercar; //supercar로 치환
	horse2.run(); // 타입자체는 Horse이나 참조변수를 넣어서 실제 구현은 SuperCar::Car::run(); 이렇게 된다
						// 이것은 위에 virtual로 연결된 두 run()함수가 있기에 가능하다 
						// 그래서 Horse타입에 run에서 출력이 ㅊㅏ가 달린다로 나오는 것이다.
}
