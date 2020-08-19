


#include <stdio.h>

void input_str( char(*)[80] );
void print_str( char(*)[80] );

int main(void) {
    char input[5][80] ={ "하얗게 피어난 얼음 꽃 하나가",
		 "달가운 바람에 얼굴을 내밀어",
		 "아무 말 못했던 이름도 몰랐던",
		 "지나간 날들에 눈물이 흘러",
		 "차가운 바람에 숨어 있다." };
	
	 input_str(input);
	 print_str(input);
}


void input_str( char(*input_string)[80] ) {
    printf("다섯개의 문장을 입력하세요.. \n");

    for(int i=0; i<5; i++) {
		for(int j=0; j<80; j++) {
			printf("%c", input_string[i][j]);
		}
		printf("\n");
	 }
}

void print_str( char(*output_string)[80] ) {

    printf("입력된 문장은 .. \n");

    for(int i=0; i<5; i++) {
		for(int j=0; j<80; j++) {
			printf("%c", output_string[i][j]);
		}
		printf("\n");
	 }

}
