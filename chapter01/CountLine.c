#include <stdio.h>
/* Count the lines in a text file v0.1*/

int main()
{
	int c, nl;
	nl = 0;

	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("New lines: %d\n", nl);
}
