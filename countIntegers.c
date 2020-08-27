//ENTER 5 NUMBERS AND IT WILL SHOW HOW MANY ARE POSITIVE AND HOW MANY ARE NEGATIVE
#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int numbers[5], positive = 0, negative = 0;
    printf("Enter numbers[0] : \n");
    scanf("%d", &numbers[0]);
    printf("Enter numbers[1] : \n");
    scanf("%d", &numbers[1]);
    printf("Enter numbers[2] : \n");
    scanf("%d", &numbers[2]);
    printf("Enter numbers[3] : \n");
    scanf("%d", &numbers[3]);
    printf("Enter numbers[4] : \n");
    scanf("%d", &numbers[4]);

    for (int i = 0; i < 5; i++)
    {
        /* code */
        if (numbers[i] > 0)
        {
            /* code */
            positive = positive + 1;
        }

        if (numbers[i] < 0)
        {
            /* code */
            negative = negative + 1;
        }
    }
    
    printf("Number of positive integers : %d\n", positive);
    printf("Number of negative integers : %d", negative);
    return 0;
}
