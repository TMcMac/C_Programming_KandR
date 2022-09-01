#include <stdio.h>

/* This is a simple program to give a Fahrenheit to Celsius table v2.0 */

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;   /* lower limit of the temp scale */
	upper = 300; /* upper limit of our temp scale */
	step = 20;   /* the steps in fahr we will make 0 to 300 */

	fahr = lower;
	printf("Fahrenheit       |      Celsius\n");
	printf("_______________________________\n");
	while (fahr <= upper) 
	{
		celsius = 5 * (fahr -32) / 9;
		printf("%6.0f \t \t | \t %6.2f\n", fahr, celsius);
		fahr = fahr + step;
	};

};
