#include <stdio.h>
#include <stdio.h>

 typedef struct student
{
    /* data */
    int id;
    int marks;
    char name[34];
    char favChar;
} std;

int main()
{
     /* code */

    // typedef <previous_name> <alias_name>;

    // typedef int declare_integer;

    // declare_integer a;
    // a = 7;
    // printf("%d", a);
     std s1, s2;
     s1.id = 54;
     s2.id = 45;
     printf("s1 id is : %s", s1.id);
    return 0;
}