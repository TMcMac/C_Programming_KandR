#include <stdio.h>
/* copying from input to output one char at a time v1.1 */

int main()
{
	int c;
	
	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}
