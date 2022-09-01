#include <stdio.h>

/* Lets do our temp conversion with a for loop */

main()
{
	int fahr;
	printf("Fahr | Cels\n");
	printf("_______________\n");
	for(fahr = 0; fahr <= 300; fahr += 20)
	{
		printf("%3d  | %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
	}
}
