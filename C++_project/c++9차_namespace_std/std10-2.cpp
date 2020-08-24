

#include <cstdio>
#include <iostream>


void Swap(int &a, int &boid);

int main() {

	int a = 10;
	int boid = 30;

	std::cout << "변경 전 \n" << "a = " << a << "\n" << "boid = " << boid << "\n\n" << std::endl;
	
	Swap(a, boid);

	std::cout << "변경 후 \n" << "a = " << a << "\n" << "boid = " << boid << std::endl;

}

void Swap(int &a, int &boid) {
	int temp;
	temp = boid;
	boid = a;
	a = temp;
}


