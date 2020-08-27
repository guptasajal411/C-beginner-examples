//Write a C program to find and print the square of each one of the even values from 1 to a specified value
#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int N;
    printf("\n\nEnter value of N : ");
    scanf("%d", &N);
    for (int i = 2; i <= N; i++)
    {
        /* code */
        if (i % 2 == 0)
        {
            /* code */
            printf("%d x %d = %d\n", i, i, i * i);
        }
        
    }
    
    return 0;
}
