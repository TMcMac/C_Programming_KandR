#include <stdio.h>

/* A program to copy it's input to output removing extra white space */

int main()
{
    int c, pc;
    pc = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (pc == c)
                continue;
            else
                pc = c;
                putchar(c);
        }
        else
            putchar(c);
    }    
}