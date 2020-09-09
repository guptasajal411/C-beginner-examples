#include <stdio.h>
#include <string.h>

int main()
{
     /* code */
     char string1[] = "sajal";
     char string2[] = "harry";
     char s3[54];
    //  puts(strcat(string1, string2));
     printf("Length of string1 is %d\n", strlen(string1));
     printf("Length of string2 is %d\n", strlen(string2));
     puts(strrev(string1));
     puts(strrev(string2));
    
    // s3 = strcat(string1, string2)    CANNOT BE DONE AS s3 IS AN ARRAY

    strcpy(s3, strcat(string1, string2));
    puts(s3);
    return 0;
}