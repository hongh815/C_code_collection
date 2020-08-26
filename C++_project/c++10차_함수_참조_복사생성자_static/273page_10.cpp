


#include <iostream>
#include <string>


using namespace std;

class Buffer {
	string text;
public:
	
	Buffer(string text) { this->text = text; }
	Buffer& append(Buffer& addname, string text);	
	void add(string next) { text += next; }
	void print() { cout << text << endl; }
};



Buffer& append(Buffer& addname, string text) {
	
	addname.add(text);
	return addname;
}

int main(void) {


	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys");

	temp.print();
	buf.print();
}
