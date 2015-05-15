#include <stdio.h>

#define LOWER 0
#define STEP 20
#define UPPER 300

int main(){
	int fahr = 0;
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));
	return 0;
}