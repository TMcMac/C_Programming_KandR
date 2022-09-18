#include <stdio.h>

/* count word lengths */

int main ()
{
	int c, i, j;
	int nwords[15];

	for (i = 0; i< 15; i++)
		nwords[i] = 0;
	i = 0;

	while ((c = getchar()) != EOF)
	{
		if ((c == ' ' || c == '\t' || c == '\n') && i != 0)
		{
			nwords[i]++;
			i = 0;
		}			
		else
			++i;
	}

	printf("Word Lengths:\n");
	for (i = 0; i < 15; i++)
	{
		printf("%d: ", i);
		for (j = 0; j < nwords[i]; j++)
			printf("#");
		printf("\n");
	}
}
