

#include <cstdio>
#include <iostream>

using namespace std;

class Rect;
class RectManager;

class RectManager {
	public :
		bool equals(Rect r, Rect s);
		void copy(Rect& dest, Rect& src);
		friend Rect;
};

class Rect {
	int width, height;
	RectManager rectM;

public:
	Rect(int width , int height) { 
		this->width = width; 
		this->height = height;
		this->rectM = 10;
	};
	friend bool RectManager::equals(Rect r, Rect s);
	friend bool equals(Rect r, Rect s);
};

bool RectManager::equals(Rect r, Rect s) {
	if(r.width == s.width && r.height == s.height) {
		return true;
	}
	else {
		return false;
	}
};
void RectManager::copy(Rect& dest, Rect& src) {
	dest.width = src.width;
	dest.height = src.height;
};


bool equals(Rect r, Rect s);


bool equals(Rect r, Rect s) {
	if(r.width == s.width && r.height == s.height) {
		return true;
	}
	else {
		return false;
	}
}


int main(void) {

	Rect a(3,4), b(4,5);
	if(equals(a,b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}
