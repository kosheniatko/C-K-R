#include <stdio.h>

/* print Celsius-Fahrenheit table 
	for celsius = 300, 280, ....., 0

	implementation with for loop instead of while */

int main()
{
	for (int fahr = 300; fahr >= 0; fahr = fahr - 20)
	{
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}

	return 0;
}