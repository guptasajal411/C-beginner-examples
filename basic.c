#include <stdio.h>
#include <string.h>



void newPrint (char * char1){
    printf("You printed %s\n", char1);
}



struct Samaan
{
    char name[60];
    char expiry[10];
    int price;
} grocery;



void printStruct(struct Samaan sm)
{
    printf("Item name is %s\n", sm.name);
    printf("Item expiry date is %s\n", sm.expiry);
    printf("Item price is %d\n", sm.price);
}


int main()
{
    // printf("Hello World\n");
    int age;
    // printf("Enter your age\n");
    // scanf("%d", &age);

    if (age < 18)
    {
        // printf("Your age is %d, you cannot drive.", age);
    }
    else if (age >= 18 && age <= 120)
    {
        // printf("Your age is %d, you can drive\n", age);
        // printf("Carry your liscence while driving");
    }
    /*
    else
    {
        printf("Invalid age, You entered %d as your age.\nTry again\n", age);
    }
    */

    int count = 0;
    while (count < 18)
    {
        // printf("%d\n", count);
        count++;
    }
    for (int i = 0; i < 50; i++)
    {
        // printf("%d\n", i);
    }
    
    // newPrint("Hello");

    // char groceryName;
    // printf("Enter item name, [D]al, [C]hawal, [S]abun\n\n");
    // scanf("%s", &groceryName);
    struct Samaan D, C, S;
    {
        strcpy(D.name, "Dal");
        strcpy(D.expiry, "24082022");
        D.price = 120;
        strcpy(C.name, "Chawal");
        strcpy(C.expiry, "05122080");
        C.price = 60;
        strcpy(S.name, "Sabun");
        strcpy(S.expiry, "25122025");
        S.price = 25;
        // printStruct(groceryName);

    };
    


    return 0;
}
