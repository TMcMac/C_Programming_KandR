#include <stdio.h>

/* Temp conversion program using helper function */

float ftoc(float fahr);

int main()
{
	float cel, fahr;
	printf("Fahrenheit || Celsius\n");
	for (fahr = 0.0; fahr <= 100.0; fahr +=10)
	{
		cel = ftoc(fahr);
		printf("%.2f   ||  %.2f\n", fahr, cel);
	}
}

float ftoc(float fahr)
{
	return ((fahr - 32) * (5.0/9.0));
}

