#include <stdio.h>

/* This is a simple program to give a Celsius to Fahrenheit table v2.0 */

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;   /* lower limit of the temp scale */
	upper = 300; /* upper limit of our temp scale */
	step = 20;   /* the steps in fahr we will make 0 to 300 */

	celsius = lower;
	printf("Celsius      |     Fahrenheit\n");
	printf("_____________________________\n");
	while (celsius <= upper) 
	{
		fahr = ((9 * celsius) / 5) + 32;
		printf("%6.0f       |    %6.2f\n", celsius, fahr);
		celsius = celsius + step;
	};

};
