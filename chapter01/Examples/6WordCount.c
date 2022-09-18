#include <stdio.h>
/* Simple program to count the words in a file */

#define IN 1 /* The state of being in a word */
#define OUT 0 /* The state of being outside a workd */

/* Count lines, words, and characters in input */

int main()
{
	int c, newlines, words, chars, state;
	state = OUT;
	newlines = words = chars = 0;

	while ((c = getchar()) != EOF)
	{
		++chars;
		if (c == '\n')
			++newlines;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++words;
		}
	}
	printf("Newlines: %d\nWords: %d\nChar count: %d\n", newlines, words, chars);
}
