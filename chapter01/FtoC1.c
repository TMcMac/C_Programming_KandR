#include <stdio.h>

/* This is a simple program to give a Fahrenheit to Celsius table */

int main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;   /* lower limit of the temp scale */
	upper = 300; /* upper limit of our temp scale */
	step = 20;   /* the steps in fahr we will make 0 to 300 */

	fahr = lower;
	while (fahr <= upper) 
	{
		celsius = 5 * (fahr -32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	};

};
