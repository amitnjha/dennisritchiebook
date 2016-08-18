/* Page 15 e-book, page 13 hard copy. variable and arithmatic expressions exercise 1-3*/


/* Print Fahrenhite - Celcius table
for fahr = 0, 20,..... 300 floating point conversion*/
#include <stdio.h>

int main(){

	float fahr, celsius;
	float lower, upper, step;

	lower = 0; /** Lower limit of temperature table*/
	upper = 300; /* Upper limit*/
	step = 20; /* Step*/

	fahr = lower;
	printf("Fahr\tCelcius\n");
	printf("++++\t+++++++\n");

	while (fahr <= upper){
		celsius = (5.0f / 9.0f) *(fahr - 32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}


	return 0;
}


