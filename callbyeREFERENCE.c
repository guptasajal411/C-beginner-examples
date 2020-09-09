#include <stdio.h>
#include <stdio.h>

void changeValue(int *address,int* other)
{
    *address = *other;
}

int main()
{
    /* code */
    int a = 55, b = 12 ;
    printf("Value of a is %d\n", a);
    changeValue(&a, &b);
    printf("Value of a is %d\n", a);
    return 0;
}