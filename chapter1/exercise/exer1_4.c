/* Page 15 e-book, page 13 hard copy. variable and arithmatic expressions exercise 1-3*/


/* Print Celcius - fahrenhite table
for fahr = 0, 20,..... 300 floating point conversion*/
#include <stdio.h>

int main(){

	float fahr, celsius;
	float lower, upper, step;

	lower = 0; /** Lower limit of temperature table*/
	upper = 300; /* Upper limit*/
	step = 20; /* Step*/

	celsius = lower;
	printf("Celcius\tFahr\n");
	printf("++++\t+++++++\n");

	while (celsius <= upper){
		fahr = (9.0f / 5.0f) *celsius + 32.0;
		printf("%3.0f\t%6.2f\n", celsius, fahr);
		celsius = celsius + step;
	}


	return 0;
}


