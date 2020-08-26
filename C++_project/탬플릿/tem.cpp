

#include <iostream>
#include <cstring>

using namespace std;

template <typename U, typename V>
U add(U arr[], V arr2[], int size) {
	U sum = 0;
	for(int i=0; i<size; i++) {
		sum = arr[i] + arr2[i];
	}


	return sum;
}

template <class T>
class CData {
	T* arrPtr = nullptr;
	int size = 0;
public:
	CData(int size) : size(size) {
		arrPtr = new T[size];	// 동적개체 할당

	}
	~CData() {delete[] arrPtr;}
	
	//복사생성자 할당
	CData(const CData& rhs) : size(size) { //rhs 값을 받아서 CData에 복사만 해주는 것 const : 복사할때 값이 변하는것을 방지
		arrPtr = new T[size];
		memcpy(this->arrPtr, rhs.arrPtr, sizeof(T)*rhs.size); // memcpy 활용해서 값 복사.
		this->size = rhs.size;
	}

	//대입 연산자 작성
	CData& operator = (const CData& rhs) {
		if(this == &rhs) {
			return *this;
		}

		delete arrPtr;  // 혹시 이전에 생성된 값들이 남아있을지 모르니 삭제 해주는 것.
		arrPtr = new T[rhs.size];
		memcpy(this->arrPtr, rhs.arrPtr, sizeof(T)*rhs.size); // memcpy 활용해서 값 복사.
		this->size = rhs.size;

		return *this;
	}
	
	//대입연산자 배열
	T& operator[](int index) {
		if((index < 0) && (size <= index)) {
			cout << "ERROR : 배열 출력 범위가 넘어서 올바르지 않습니다." << endl;
			exit(1);
		}


		return  arrPtr[index];		
	}
	
	void setCount() {
		for(int i = 0; i< size; i++) {
			arrPtr[i] = i;
		}
	}

	void printCData() {
		for(int i=0; i<size; i++) {
			cout << "arrPtr[" << i << "] : " << arrPtr[i] << endl;
		}
	}
};

int main(void) {
//	int arr[5] = {1,2,3,4,5};
//	int sum = add(arr, (sizeof(arr)/sizeof(arr[0])));
//	cout << "sum : " << sum << endl;

	CData<int> cdata(5);
	cdata.setCount();
	cdata.printCData();
	cout << endl;

//	CData<int> cdata2(cdata); //복사생성자 호출
//	cdata2.printCData();
//	cout << endl;

//	CData<int> cdata3(5);
//	cdata3 = cdata;
//	cdata3 = cdata3;
//	cdata3.printCData();

	int a[5];
	cout << a[4] << endl;

	CData<int> cdataArr[5];
	cdataArr[0] = cdata;

	cout << cdataArr[0].operator[](1) << endl;
	cout <<  cdataArr[0][0] << endl;

}
