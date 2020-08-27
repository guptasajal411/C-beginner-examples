  
/*
You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).
Input Format
The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.
Output Format
Print the required answer on a single line.
Constraints 
Note
String S consists of lowercase English Alphabets only.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    char palin[20];
    printf("Enter the word to check palindrome : ");
    scanf("%s", &palin);

    int a = strlen(palin);
    int check = 0;

    printf("The length of the given word is : %d\n", a);

    for (int i = 0; i <= a / 2; i++)
    {
        /* code */
        if (palin[i] == palin[(a - 1) - i])
        {
            /* code */
            check++;
        }
    }
    if (a % 2 == 0)
    {
        /* code */
        if (check == (a / 2) + 1)
        {
            /* code */
            printf("YES");
        }
        else
        {
            /* code */
            printf("NO");
        }
    }
    if (a % 2 != 0)
    {
        /* code */
        if (check == (a / 2) + 1)
        {
            /* code */
            printf("YES");
        }
        else
        {
            /* code */
            printf("NO");
        }
    }

    return 0;
}
