#include <stdio.h>
/* A program to print input out one word per line */

int main()
{
	int c;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
			printf("\n");
		else
			putchar(c);
				
	}
}
