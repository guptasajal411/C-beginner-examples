#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int a = 87;
    int* ptra = &a;
    int* ptra2 = NULL;
    int* ptra3;
    printf("The value of a is %d\n", a);    
    printf("The value of a is %d\n", *ptra);    
    printf("The address of a is %d\n", ptra);    
    printf("The address of a is %d\n", &a);    
    printf("The address of ptra is %d\n", &ptra);    
    printf("The address of ptra2 [NULL] is %x\n", &ptra2);    
    printf("The address of ptra3 is %d\n", &ptra3);    
    return 0;
}
