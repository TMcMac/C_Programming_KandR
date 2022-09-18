#include <stdio.h>

/* A simple program to make white space charactes visible */

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            putchar('\\');
            putchar('s');
        }
        else if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\n')
        {
            putchar('\n');
            putchar('\\');
            putchar('n');
        }
        else
            putchar(c);
    }

}