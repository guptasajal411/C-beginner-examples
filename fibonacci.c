/* First 21 Fibonacci Numbers are :-
 F0	F1	F2	F3	F4	F5	F6	F7	F8	F9	F10	F11	F12	F13	F14	F15	F16	F17	 F18   F19   F20
 0	1	1	2	3	5	8	13	21	34	55	89	144	233	377	610	987	1597 2584  4181  6765
*/

// #include <stdio.h>

// int fibonacci(int number){
//     if (number == 0 || number == 1)
//     {
//         return number;
//     }
//     else
//     {
//         return fibonacci(number - 2) + fibonacci(number - 1);
//     }
    
// }
// int main()
// {
//     /* code */
//     int N;

//     printf("Enter fibonacci index : ");
//     scanf("%d", &N);

//     printf("%d", fibonacci(N));
//     return 0;
// }




#include <stdio.h>

int fib_recursive(int n)
{
    if(n==1 || n==2){
        return n-1;
    }
    else{
        return fib_recursive(n-1) + fib_recursive(n-2);
    }    
}


int fib_iterative(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n-1; i++)
    {
        b = a+b; //1 for iteration 1
        a = b-a; //1 for iteration 1

    }
    
    return a;
}

int main()
{
    int number;
    printf("Enter the index to get fibonacci series : ");
    scanf("%d", &number);
    printf("The value of fibonacci number at position no %d using iterative approach is %d\n",number, fib_iterative(number));
    printf("The value of fibonacci number at position no %d using recursive approach is %d\n", number, fib_recursive(number));
    return 0;
}