
// 스타크래프트 일꾼 구현하기
#include <iostream>

using namespace std;

class Worker {
protected :
	int hp, mp;
	int mineral;

	Worker() {
		cout << "Worker()" << endl;
	}
	Worker(int hp, int mp) {
		this->hp = hp;
		this->mp = mp;
		cout << "Worker(int hp, int mp)" << endl;

	} //초기화를 위한 생성자 호출
	int mine(int mineral) { //광물캐기
		return mineral;
	}

//	void attack(SCV scv) {
//		scv.hp -= 10;
//	}
//	void attack(Drone drone) {
//		drone.hp -= 10;
//	}
//	void attack(Prove prove) {
//		prove.hp -= 10;
//	}
public:
	void attack(Worker& worker) {
		worker.hp -= 10;
	}
	void checkinfo() {
		cout << "Unit info : " << hp << ", " << mp << endl;
	}

};

class SCV : public Worker {
public :
	SCV() : Worker(40, 0) { // SCV 의 hp, mp를 위의 생성자를 이용하여 40, 0 으로 초기화
//		this->hp = 40;
//		this->mp = 0;

		cout << "SCV()" << endl;
	}

//	void fix(SCV scv) {
//		scv.hp = 40;
//	}	
//	void checkinfo() {
//		cout << "SCV info : " << hp << ", " << mp << endl;
//	}
};

class Drone : public Worker {
public :
	Drone() : Worker(40, 0) {

		cout << "Drone()" << endl;
	}
//	void checkinfo() {
//		cout << "Drone info : " << hp << ", " << mp << endl;
//	}

};

class Prove : public Worker{
public :
	Prove() : Worker(40, 0) {

		cout << "Prove()" << endl;
	}
	void checkinfo() {
		cout << "Prove info : " << hp << ", " << mp << endl;
	}
};

int main(void) {
	
	cout << "------------------" << endl;
	cout << "---- 유닛정보 ----" << endl;
	cout << "------------------" << endl;
	
	SCV scv;
	scv.checkinfo();

	Drone drone;
	drone.checkinfo();

	Prove prove;
	prove.checkinfo();

	cout << "------------------" << endl;
	cout << "-- 공격함수구현 --" << endl;
	cout << "------------------" << endl;

	scv.attack(drone);
	scv.checkinfo();
	drone.checkinfo();
}
