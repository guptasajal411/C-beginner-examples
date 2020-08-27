/* Write a C program to print 3 numbers in a line, starting from 1 and print n lines.
   Accept number of lines (n, integer) from the user. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("\n\nENTER NUMBER OF ROWS OF NATURAL NUMBERS : ");
    scanf("%d", &n);

    for (int i = 0; i <= n;)
    {
        /* code */
        printf("%d %d %d\n", i, i + 1, i + 2);
        i = i + 3;
    }
    
    return 0;
}
