#include <stdio.h>
#define MAXLINE 1000

/* Exercise 1-19 reverse the lines from input */

int main()
{
    int i = 0;
    int c;
    char line[MAXLINE];

    while((c = getchar()) != EOF)
    {
        if(c == '\n' && i > 2)
        {
            line[i] = '\0';
            for(i - 1; i >= 0; --i)
                printf("%c", line[i]);
                line[i] = '\0';
            printf("\n");
            i = 0;
        }
        else
            line[i] = c;
            i++;
    }
    return 0;
}