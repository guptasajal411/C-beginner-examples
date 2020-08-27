#include <stdio.h>

int main()
{
    int prime;
    printf("Enter natural number to see if is it prime or not : \a \n");
    scanf("%d", &prime);

    for (int i = 2; i < prime; i++)
    {
        /* code */
        if (prime % i != 0)
        {
            printf("%d is a prime number, I just divided it by %d\n", prime, i);
        }
        
    }
     
}