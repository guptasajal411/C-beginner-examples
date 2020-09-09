#include <stdio.h>
#include <string.h>

void arrayRev(int arr[])
{
    for (int i = 0; i < 3; i++)
    {
        /* code */
        int hello = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = hello;
    }

    printf("Array after reversal : ");

    for (int j = 0; j < 7; j++)
    {
        /* code */
        printf("%d ", arr[j]);
    }
    printf("\n\n");
    
}

int main()
{
    /* code */
    int array1[] = {1, 2, 3, 4, 5, 6, 67};
    printf("\n\n");
    printf("Array before reversal : ");
    for (int i = 0; i < 7; i++)
    {
        /* code */
        printf("%d ", array1[i]);
    }
    printf("\n\n");
    arrayRev(array1);

    return 0;
}
