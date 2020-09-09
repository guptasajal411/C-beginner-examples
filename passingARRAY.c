#include <stdio.h>
#include <stdio.h>

int func1(int array1[])
{ 
    for (int i = 0; i < 4; i++)
    {
        printf("Value at %d is %d\n", i, array1[i]);
    }
    // array1[0] = 8546 --->  if you change any value here it gets reflected in main
    
    return 0;
}


int func2(int* ptr){
    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf("Value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 65345;
    
}

void func3(int array[2][2]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, array[i][j]);
        }
        
    }
    
}


int main()
{
    /* code */
    int arr[] = {1, 23, 3, 24};
    int arr1[] = {{1, 2, 3, 4},
                  {5, 6, 7, 8}};
    // func1(arr);
    // func2(arr);
    func3(arr1);


    return 0;
}