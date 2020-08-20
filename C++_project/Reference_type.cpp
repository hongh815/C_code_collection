


#include <iostream>
 
using namespace std;

int main(void) {

	int i = 1;
	int n = 2;
	int& refn = n;

	n = 4;
	refn++;
	cout << i << '\t' << n << '\t' << refn << endl;

	refn = i; // i 값이 n에 들어간다.
	refn++;
	cout << i << '\t' << n << '\t' << refn << endl;

	int *p = &refn;
	*p = 20;
	cout << i << '\t' << n << '\t' << refn << endl;

	
// ReferenceType을 이용한 for문 예제
	int aList[5] = { 10, 20, 30, 40, 50};
	for(int i=0; i<5; i++) {
		cout << aList[i] << ", ";
	}
	cout << endl;
	cout << "----------------------" << endl;

	for( auto n : aList) { //자동으로 에이리스트의 타입으로 n을 설정한다.
		cout << n << ", ";
	}
	cout << endl;
	cout << "---------------------" << endl;
	
	for( auto n : aList) { //자동으로 에이리스트의 타입으로 n을 설정한다.
		cout << n << ", ";
		n++;
	}
	cout << endl;

	for( auto n : aList) { //자동으로 에이리스트의 타입으로 n을 설정한다.
		cout << n << ", ";
	}
	cout << endl;
	cout <<"----------------------"<< endl;
	
	for( auto &n : aList) { //자동으로 에이리스트의 타입으로 n을 설정한다.// ReferenceType추가부분
		cout << n << ", ";
		n++;
	}
	cout << endl;

	for( auto &n : aList) { //자동으로 에이리스트의 타입으로 n을 설정한다. ReferenceType을 추가한 부분에서 n++를 했더니 1이 더해진 상태로 출력
		cout << n << ", ";
		}
	cout << endl;
	cout << "///// /// // / / / / /" <<endl;


// 2차 배열을 ReferenceType을 이용해서 출력하는 부분
	int a2List[3][4] = { {1,2,3,4} ,
								{5,6,7,8} ,
								{9,10,11,12} } ;

	for(auto &n : a2List) {   //처음 n에는 3개의 행이 세번에 걸쳐 들어가게 될거고,
		for(auto &m : n) {	//그 다음 m에는 이제 3개의 각 행에 들어 있는 4개의 숫자가 하나하나 들어가게 될것이다.
			cout << m << "\t"; 	// 그리고 그것을 출력하여 2차 배열이 완성되는 원리이다.
		}
		cout << endl;
	}
}
