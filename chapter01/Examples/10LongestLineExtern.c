#include <stdio.h>
#define MAXLINE 1000 /* Maximum size of an input line */

int max; /* maximum line length we have seen so far */
char line[MAXLINE]; /* current input line */
char longest[MAXLINE]; /* Longest lie saved here */

int getLine(void);
void copy(void);

/* Print the longest input line; specialized version */
int main()
{
    int len; /* current line length */
    extern int max;
    extern char longest[];

    max = 0;

    while((len = getLine()) > 0)
        if (len > max)
        {
            max = len;
            copy();
        }
    if (max > 0) /* There was a line */
        printf("%s\n", longest);
    return 0;
}

/* getline: read a line into s and return length */
int getLine()
{
    int c, i;
    extern char longest[];

    for (i=0; i < MAXLINE-1 && (c=getchar()) != EOF && c!='\n'; ++i)
        line[i] = c;
    if (c =='\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to; assume to is big enough */
void copy()
{
    int i;
    extern char line[], longest[];
    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}