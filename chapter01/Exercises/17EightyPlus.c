#include <stdio.h>
#define MAXLINE 1000

/* Exercise 1-17 copy lines that are 80 char or more */

int main()
{
    int i = 0;
    int c;
    char line[MAXLINE];

    while((c = getchar()) != EOF)
    {
        line[i] = c;
        i++;
        if(c == '\n' && i >= 80)
        {
            line[i] = '\0';
            printf("%s \ncount: %d\n", line, i);
            i = 0;
        }
        else if (c == '\n' && i < 80)
            i = 0;
        else
            continue;
    }
    return 0;
}