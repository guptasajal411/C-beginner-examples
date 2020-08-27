#include <stdio.h>

int main()
{
    int inputNum;
    printf("Enter number for multiplication number\n");
    scanf("%d", &inputNum);
    printf("\n");

    int index = 1;
    printf(">>>>>>>>>>>>>>>> MULTIPLICATION TABLE OF %d <<<<<<<<<<<<<<<<\n\n", inputNum);
    while (index < 11)
    {
        printf("                       %d x %d = %d\n\n", inputNum, index, index * inputNum);
        index = index + 1;
    }
    return 0;
}