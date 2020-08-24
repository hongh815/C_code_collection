

#include <cstdio>
#include <iostream>

using namespace std;

class Calculator {

	double x = 0;
	double y = 0;
	public : 
		int cntA=0;
		int cntD=0;
		int cntM=0;
		int cntMi=0;
		Calculator() {};	

		void setX(double& a) {
			x = a;
		}
		void setY(double& b) {
			y = b;
		}

		void Init(void) {
			double a;
			double b;
			char input;
			cout << "실수 (연산자) 실수 : " << endl;
			cin >> a >> b;
			setX(a);
			setY(b);
		}
		double Add();
		double Div();
		double Min();
		double Mul();
		void ShowOpCount();


		double getY() {
			return y;
		}
		double getX() {
			return x;
		}
	
		~Calculator() {

			cout << "\n\ndestroy\n\n" << endl; 
		};
};

double Calculator::Add() {
	cntA++;
	return x + y;
}

double Calculator::Min() {
	cntMi++;
	return x - y;
}

double Calculator::Mul() {
	cntM++;
	return x * y;
}

double Calculator::Div() {
	cntD++;
	return x / y;
}
void Calculator::ShowOpCount() {
	cout << "덧셈: " << cntA << ", "; 
	cout << "뺄셈: " << cntMi << ", "; 
	cout << "곱셈: " << cntM << ", ";
	cout << "나눗셈: " << cntD << endl; 
}

int main(void)
{
	Calculator cal; 
	cal.Init();

	cout << "\n" << endl;
	cout << cal.getX() << " + " << cal.getY() << " = " << cal.Add() << endl; 
	cout << cal.getX() << " / " << cal.getY() << " = " << cal.Div() << endl; 
	cout << cal.getX() << " - " << cal.getY() << " = " << cal.Min() << endl; 
	cout << cal.getX() << " / " << cal.getY() << " = " << cal.Div() << endl; 
	
	cal.ShowOpCount();

	return 0; 
}
