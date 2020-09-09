#include <stdio.h>
#include <stdio.h>
void swap(int*x, int*y){
    int temp = *x;
    *x = *y; // y ki value x ko dedo
    *y = temp; // temp = x matlab x ki value x ko dedo
    return;
}


int main()
{
     /* code */
    int a = 87, b = 22;
    printf("%d and %d\n", a , b);
    swap(&a, &b);
    printf("%d and %d\n", a, b);
    return 0;
}