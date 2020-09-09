#include <stdio.h>
#include <stdio.h>

int add (int* address1, int* address2){
    printf("%d\n", (*address1) + (*address2));
    printf("%d\n", (*address1) - (*address2));
    int temp = *address1;
    *address1 = *address2;
    *address2 = temp;
    printf("a = %d\nb = %d\n", *address1, *address2);

}

int main()
{
     /* code */
     int a = 8, b = 5;

     printf("%d\n", add(&a, &b));
    
    return 0;
}