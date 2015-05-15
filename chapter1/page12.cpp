/* Page 12 e-book, page 9 hard copy. variable and arithmatic expressions */


/* Print Fahrenhite - Celcius table 
     for fahr = 0, 20,..... 300*/

#include <stdio.h>


int main12(){
	
	int fahr, celsius;
	int lower, upper, step;

	lower = 0; /** Lower limit of temperature table*/
	upper = 300; /** Upper limit*/
	step = 20;

	fahr = lower;

	while (fahr <= upper){
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n",fahr,celsius);
		fahr = fahr + step;
	}

	return 0;

}