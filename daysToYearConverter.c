#include <stdio.h>

int main()
{
    /* code */
    int days, years = 365, weeks = 7;
    
    printf("Enter no of days : ");
    scanf("%d", &days);

    printf("Number of years : %d\n", days/years);

    printf("Number of weeks : %d\n", (days%years) / weeks);

    printf("Number of days : %d\n", (days%years) % weeks);


    return 0;
}