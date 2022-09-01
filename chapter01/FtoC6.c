#include <stdio.h>

/* Lets do our temp conversion with a for loop */

int main()
{
	int fahr;
	printf("Fahr | Cels\n");
	printf("------------\n");
	for(fahr = 300; fahr >= 0; fahr -= 20)
	{
		printf("%3d  | %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
	}
}
