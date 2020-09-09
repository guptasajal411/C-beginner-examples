#include <stdio.h>
#include <string.h>

void arrayRev(int arr())
{
    void swap(int a, int b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = 0; i < 4; i++)
    {
        /* code */
        int hello = arr[i];
        arr[i] = arr[7 - i];
        arr[7 - i] = hello;
    }

    for (int j = 0; j < 7; j++)
    {
        /* code */
        printf("%d", arr(j));
    }
}

int main()
{
    /* code */
    int array1[] = {1, 2, 3, 4, 5, 6, 67};

    return 0;
}