#include <stdio.h>
#include <stdio.h>

int main()
{
    /* code */
    int marks[4]; // only declaration
    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf("Enter marks of %d student", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf(" marks of %d student is %d\n", i, marks[i]);
        
    }
    
    // marks[0] = 23;
    // marks[1] = 224;
    // marks[2] = 254;
    // marks[3] = 2;
    // printf

    int tdarray[2][4] = {{2,4,6,8},
                         {1,3,5,7}}; 
    for (int i = 0; i < 2; i++)
    {
        /* code */
        for (int j = 0; j < 4; j++)
        {
            /* code */
            printf("Value at %dth row and %dth column is %d\n", i, j, tdarray[i][j]);
        }
        
    }
    
    return 0;
}