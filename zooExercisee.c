/* You are required to enter a word that consists of x and y that denote the number of Zs and Os respectively.
The input word is considered similar to word zoo if 2 x X = Y.

Determine if the entered word is similar to word zoo.

For example, words such as zzoooo and zzzoooooo are similar to word zoo but not the words such as zzooo and zzzooooo.

Input format

First line: A word that starts with several Zs and continues by several Os.
Note: The maximum length of this word must be 20 .
Output format

Print Yes if the input word can be considered as the string zoo otherwise, print No. */

#include <stdio.h>

int main()
{
    /* code */
    int z = 0, o = 0;
    char string[20];
    scanf("%s", &string);

    for (int i = 0; i < 21; i++)
    {
        /* code */
        if (string[i] == 'z')
        {
            z++;
        }
        if (string[i] == 'o')
        {
            o++;
        }
    }

    if (o == 2 * z)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}