#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter value of N : \n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    
    printf("The sum of first %d natural numbers is %d", num, sum);
    return 0;
}