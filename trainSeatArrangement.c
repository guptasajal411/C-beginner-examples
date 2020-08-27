/*Akash and Vishal are quite fond of travelling. They mostly
 travel by railways. They were travelling in a train one day 
 and they got interested in the seating arrangement of their
 compartment. The compartment
 looked something like :-
 
 https://he-s3.s3.amazonaws.com/media/uploads/a2e0794.jpg


So they got interested to know the seat number facing them and
the seat type facing them. The seats are denoted as follows :

Window Seat : WS
Middle Seat : MS
Aisle Seat : AS

You will be given a seat number, find out the seat number facing
you and the seat type, i.e. WS, MS or AS.

INPUT
First line of input will consist of a single integer T denoting 
number of test-cases. Each test-case consists of a single integer 
N denoting the seat-number.

OUTPUT
For each test case, print the facing seat-number and the seat-type,
 separated by a single space in a new line.

CONSTRAINTS
1<=T<=105
1<=N<=108 */

#include <stdio.h>

int main()
{
    /* code */
    int T, N;
    scanf("%d", &T);

    while (T-- > 0)
    {
        /* code */
        scanf("%d", &N);

        switch (N % 12)
        {
        case 0:
            printf("%d WS\n", N - 11);
            break;
        case 1:
            printf("%d WS\n", N + 11);
            break;
        case 2:
            printf("%d MS\n", N + 9);
            break;
        case 3:
            printf("%d AS\n", N + 7);
            break;
        case 4:
            printf("%d AS\n", N + 5);
            break;
        case 5:
            printf("%d MS\n", N + 3);
            break;
        case 6:
            printf("%d WS\n", N + 1);
            break;
        case 7:
            printf("%d WS\n", N - 1);
            break;
        case 8:
            printf("%d MS\n", N - 3);
            break;
        case 9:
            printf("%d AS\n", N - 5);
            break;
        case 10:
            printf("%d AS\n", N - 7);
            break;
        case 11:
            printf("%d MS\n", N - 9);
            break;
        default:
            break;
        }
    }

    return 0;
}
