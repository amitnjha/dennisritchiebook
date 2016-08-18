#include <stdio.h>

int FtoC(int fahr){
  int celsius = 5 * (fahr - 32) / 9;
  return celsius;
}

int main(){

	int fahr, celsius;
	int lower, upper, step;

	lower = 0; /** Lower limit of temperature table*/
	upper = 300; /** Upper limit*/
	step = 20;

	fahr = lower;

	while (fahr <= upper){
		celsius = FtoC(fahr);
		printf("%d\t%d\n",fahr,celsius);
		fahr = fahr + step;
	}

	return 0;

}
