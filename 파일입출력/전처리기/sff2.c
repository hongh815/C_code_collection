

extern int cnt; //정의가 아니라 연결만 시켜주는 것
int total;

int input_data2() {

	cnt++;
	total++;
}

int* print_data() {
	int x = 10;
	static int y = 20;

	return &x;
}
