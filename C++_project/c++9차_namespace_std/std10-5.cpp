

#include <iostream>
#include <cstdio>

//단, 위의 함수들은 구조체 안에 정의를 해서 다음의 형태로 함수를 구성할 수 있어야 한다.

using namespace std;


struct Point { 
	int xpos;
	int ypos;
	
	void MovePos(int x, int y) { 
  		xpos += x;
  		ypos += y;
	}
	
	void AddPoint(const Point &pos) {
  		xpos += pos.xpos;
  		ypos += pos.ypos;
	}
	
	void ShowPosition(void) {
 		cout << "[" << xpos << "]" << "," << "[" << ypos << "]" << endl;	
	}

};

int main(void) {
 
	Point pos1 = {12 , 4};
	Point pos2 = {20 , 30};
 

	pos1.MovePos(-7 , 10);
	pos1.ShowPosition();
	pos1.AddPoint(pos2);
	pos1.ShowPosition();
 

 	return 0; //0반환
}

