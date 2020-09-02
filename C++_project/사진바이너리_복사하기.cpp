

#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
	const char* srcfile = "C:/test/car.jpg";
	const char* desfile = "C:/test/car_copy.jpg";

	ifstream ifs(srcfile, ios::in | ios::binary);

	if(!ifs) {
		cout << "파일열기오류" << endl;
		exit(1);
	}

	ofstream ofs(desfile, ios::out | ios::binary);
	if(!ofs) {
		cout << "파일열기오류" << endl;
		exit(1);
	}

	int data;
	while((data = ifs.get()) != EOF) {

		ofs.put(data);
	}

	cout << "복사 완료" << endl;

	ofs.close();
	ifs.close();
}
