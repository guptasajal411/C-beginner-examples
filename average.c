#include <stdio.h>

int main()
{
    /* code */
    float item1, item2, freq1, freq2;
    printf("Enter weight of item 1 : ");
    scanf("%f", &item1);
    printf("Enter number of item 1 : ");   
    scanf("%f", &freq1);
    printf("Enter weight of item 2 : ");
    scanf("%f", &item2);
    printf("Enter number of item 2 : ");
    scanf("%f", &freq2);

    printf("Average floating value is %f", ((item1 * freq1)+(item2 * freq2)) / (freq2 + freq1));

    return 0;
}
