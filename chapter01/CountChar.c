#include <stdio.h>
/* Count the characters in a string v0.1*/

int main()
{
	long nc = 0;

	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}
