

#include <iostream>
#include <cstring>

using namespace std;

template<typename T>
class Data { //일반적인 경우
	private:
		T data;
	public:
		Data() {}
		void setData(T data) {this->data = data;}
		T getData() {return data;}
};

template<>
class Data<char *> {
	private:
		char* data;
	public:
		Data(char* pParam) {// 복사생성자 호출
			int size = strlen(pParam);
			data = new char[size + 1];
			memcpy(data, pParam, sizeof(char)*(size + 1));
		}
		~Data() {delete[] data;}
		char* getData() {return data;}
};

int main(void) {

	//일반적인 경우
	Data<int> intData;
	intData.setData(10);
	cout << intData.getData() << endl;

	//특별하게 char* 를 받을 경우
	char* str = new char[6];
	strcpy(str, "hello");
	Data<char*> charpData(str);
	cout << charpData.getData() << endl;
}
