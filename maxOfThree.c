//ENTER 3 NUMBERS AND IT WILL SHOW WHICH IS THE GREATEST AMONG THEM
#include <stdio.h>

int main()
{
    /* code */
    float a, b, c;

    printf("Enter a : \n");
    scanf("%d", &a);

    printf("Enter b : \n");
    scanf("%d", &b);

    printf("Enter c : \n");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        /* code */
        printf("a is largest");
    }

    else if (b > c)
    {
        /* code */
        printf("b is largest");
    }

    else if (c > b)
    {
        /* code */
        printf("c is largest");
    }

    else
    {

        printf("c is largest");
    }

    return 0;
}
