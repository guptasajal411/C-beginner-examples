
#include <stdio.h>
#include <string.h>

void parser(char* str){

    int in = 0; //if in = 0 it will take the character
    int index = 0; // index for each character of the string
    
    for (int i = 0; i < strlen(str); i++)
    {
        /* code */
        if (str[i] == '<')
        {
            in = 1;
            continue;   
        }
        else if (str[i] == '>'){
            in = 0;
            continue;
        }
        if (in == 0)
        {
            /* code */
            str[index] = str[i];
            index++;
        }
        
    }
    
    str[index] = '\0';

}

int main()
{
     /* code */
    char string[] = "<h1>This is a heading </h1>";
    parser(string);
    printf("The parsed string is ~~%s~~", string);
    return 0;
}