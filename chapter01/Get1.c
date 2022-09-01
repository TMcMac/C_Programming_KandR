#include <stdio.h>
/* copying from input to output one char at a time v1.0 */

int main()
{
	int c;
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}
