

#include <stdio.h>

double centi_to_meter(int*);

int main(void) {

	int centi = 187;
	double result = centi_to_meter(&centi);
	printf("%d cm 를 미터로 환산하면  %.2lf m 이다.\n", centi, result);

}

double centi_to_meter(int* centi) {


	double meter;
	meter = (double)*centi / 100 ;

	return meter;
}
