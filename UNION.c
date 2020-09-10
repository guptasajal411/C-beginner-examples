#include <stdio.h>
#include <string.h>

union student{
    int id;
    int marks;
    char fav;
    char name[34];
};

int main()
{
     /* code */
    union student s1;
    s1.id = 4;
    s1.marks = 45;
    s1.fav = 's';
    strcpy(s1.name, "Sajal");

    printf("ID %d\n", s1.id);
    printf("marks %d\n",s1.marks);
    printf("fav char %s\n",s1.fav);
    printf("name : %s\n",s1.name);
    
    return 0;
}