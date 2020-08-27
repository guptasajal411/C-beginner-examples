//ENTER 5 NUMBERS AND PROGRAMME WILL TELL SUM OF ODD NUMBERS BETWEEN THEM.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int numbers[5];
    printf("\n\n");

    printf("Enter number : \n");
    scanf("%d", &numbers[0]);

    printf("Enter number : \n");
    scanf("%d", &numbers[1]);

    printf("Enter number : \n");
    scanf("%d", &numbers[2]);

    printf("Enter number : \n");
    scanf("%d", &numbers[3]);

    printf("Enter number : \n");
    scanf("%d", &numbers[4]);

    int odd = 0, sum = 0;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        if (numbers[i] % 2 != 0)
        {
            /* code */
            sum = sum + numbers[i];
            odd++;
        }
    }
    printf("\nThe number of odd numbers are : %d\n", odd);
    printf("And their sum is %d.", sum);
        
    
    return 0;
}
