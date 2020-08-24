

#include <cstdio>
#include <iostream>

//다음과 같은 int 배열을 오름차순으로 정렬한 후 화면에 결과를 출력하는 프로그램을 작성하세요. 
//단, 화면에 배열 내용을 출력할 때는 반드시 ‘범위 기반 For 문’을 사용합니다.
// Int aList[5] = { 10, 20, 30, 40, 50};

void arrDesc(int*);

int main() {
	
	int number[5] {69,793,25,498,245};
	int* pnum;
	pnum = &number[0];
	arrDesc(pnum);

	std::cout << "Int aList[5] = {";
	for( auto n : number) {

		std::cout << n << ", ";
		n++;
	}
	std::cout << "}" << std::endl;


}


void arrDesc(int* number) {

	int temp;

	for(int i = 0 ; i < 5 ; i ++) {
		for(int j = 0 ; j < 4-i ; j ++) {
			if(number[j]>number[j+1]) {
				temp = *(number + j);
				*(number + j) = *(number + (j+1));
				*(number + (j+1)) = temp;
			}
		}
	}
}
