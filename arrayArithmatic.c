#include <stdio.h>
#include <stdio.h>

int main()
{
     /* code */
    int a = 34;
    int* ptr = &a;
    printf("%d\n", ptr);
    printf("%d\n", ptr + 1); //as integer uses 4 bytes, ptr + 1 gives value + 4
    ptr = ptr + 1;
    printf("%d\n", ptr);

    printf("==================================\n");

    char b = "hello";
    char* ptrb = &b;
    printf("%d\n", ptrb);
    ptrb ++;
    printf("%d\n", ptrb);
    printf("%d\n", ptrb + 1);//as char uses 1 byte, ptrb + 1 gives value + 1
    printf("%d\n", ptrb - 2);

    printf("==================================\n");

    int arr[] = {51,2,3,4,5,6,7};
    int* arrayptr = arr;
    printf("Value of position 3 is %d\n", arr[3]);
    printf("Address of first element is %d\n", &arr[0]);
    printf("Address of first element is %d\n", arr);
    printf("Address of first element is %d\n", arrayptr);
    printf("Address of second element is %d\n", &arr[1]);
    printf("Address of first element is %d\n", arr + 1);

    printf("*****************************************\n");

    // printf("Value of position 3 is %d\n", arr[3]);
    printf("Value at address of first element is %d\n", *(&arr[0]));
    printf("Value at address of first element is %d\n", (arr[0]));
    printf("Value at address of first element is %d\n", *(&arr[0]));
    printf("Value at address of first element is %d\n", *(arr));
    printf("Value at address of second element is %d\n", *(&arr[1]));
    printf("Value at address of first element is %d\n", *(arr + 1));
    return 0;
}