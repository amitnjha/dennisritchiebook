/* Page 14 e-book, page 12 hard copy. variable and arithmatic expressions */


/* Print Fahrenhite - Celcius table
for fahr = 0, 20,..... 300 floating point conversion*/
#include <stdio.h>

int main14(){

	float fahr, celsius;
	float lower, upper, step;

	lower = 0; /** Lower limit of temperature table*/
	upper = 300; /* Upper limit*/
	step = 20; /* Step*/

	fahr = lower;
	while (fahr <= upper){
		celsius = (5.0f / 9.0f) *(fahr - 32.0);
		printf("%3.0f\t%6.1f\n",fahr,celsius);
		fahr = fahr + step;
	}


	return 0;
}


