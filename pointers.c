#include <stdio.h>

int main()
{
    /* code */
    int a = 75;
    int* ptr = &a;
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *ptr);
    printf("The address of a is %p , %x\n", ptr, ptr);
    printf("The address of a is %p , %x\n", &a, &a);
    printf("The address of pointer is %p, %x", &ptr, &ptr);
    return 0;
}