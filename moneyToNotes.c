#include <stdio.h>

int main()
{
    /* code */
    int money, n100 = 100, n50 = 50, n20 = 20, n10 = 10, n5 = 5;
    printf("\n\nEnter value to convert : ");
    scanf("%d", &money);

    printf("\n=======> %d notes of Rs.100 <=======\n\n", money/n100);
    printf("=======> %d notes of Rs.50 <=======\n\n", (money % n100) / n50);
    printf("=======> %d notes of Rs.20 <=======\n\n", ((money % n100) % n50) / n20);
    printf("=======> %d notes of Rs.10 <=======\n\n", (((money % n100) % n50) % n20) / n10);
    printf("=======> %d coins of Rs.5 <=======\n\n", ((((money % n100) % n50) % n20) % n10) / 5);
    printf("=======> %d coins of Rs.1 <=======", ((((money % n100) % n50) % n20) % n10) % 5);

    return 0;
}
