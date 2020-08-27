// FINDING FACTORIAL OF AN INPUT BY RECURSIVE APPROACH

#include <stdio.h>

int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}

int main()
{
    /* code */
    int N;
    printf("\n\nEnter number of which factorial is to be found : ");
    scanf("%d", &N);
    printf("\n\n=========>  The factorial of %d is %d  <=========\n\n", N, factorial(N));
    return 0;
}
