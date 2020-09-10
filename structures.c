#include <stdio.h>
#include <string.h>

struct student
{
    /* data */
    int id;
    int marks;
    char name[34];
    char favChar;
};
struct student sajal, harry, ravi;\\ GLOBAL VARIABLES DELCARED

void print()
{
    printf("%s", sajal.name);   
}

int main()
{
     /* code */
    struct student sajal, harry, ravi; //LOCAL VAEIABLE FOR MAIN DELCLARED
    sajal.id = 1;
    harry.id = 2;
    ravi.id = 3;
    sajal.marks = 30;
    harry.marks = 29;
    ravi.marks = 28;
    strcpy(sajal.name, "Sajal");
    strcpy(harry.name, "Harry");
    strcpy(ravi.name, "Ravi");
    sajal.favChar = 'S';
    harry.favChar = 'H';
    ravi.favChar = 'R';
    printf("Sajal got %d marks\n", sajal.marks);
    printf("Sajal's name is : %s\n", sajal.name);
    print();

    
    return 0;
}