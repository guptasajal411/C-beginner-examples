#include <stdio.h>
#include <stdio.h>

void starPattern(number){
    for (int i = 0; i < number; i++)
    {
        /* code */
        for (int j = 0; j <= i; j++)
        {
            /* code */
            printf("* ");
        }
        printf("\n");
    }
    
}


int main()
{
     /* code */
    int num;
    printf("Enter size of triangle : ");
    scanf("%d", &num);
    starPattern(num);
    return 0;
}       