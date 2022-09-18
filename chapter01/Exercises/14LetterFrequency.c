#include <stdio.h>

/* count letter frequency */

int main ()
{
	int c, i, j;
	int nletters[26];

	for (i = 0; i< 26; i++)
		nletters[i] = 0;
	i = 0;

	while ((c = getchar()) != EOF)
	{
		if (c > 64 && c < 91)
			nletters[c-65]++;
		
		else if (c > 96 && c < 123)
			nletters[c-97]++;
	}

	printf("Letter Frequency:\n");
	for (i = 0; i < 26; i++)
	{
		printf("%c: ", i + 65);
		for (j = 0; j < nletters[i]; j++)
			printf("#");
		printf("\n");
	}
}
