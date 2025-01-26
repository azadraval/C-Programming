#include <stdio.h>

struct employee
{
    int code; // This declares a new user defined data types
    float salary;
    char name[30];
}; // Semicolons is important
int main()
{
    struct employee e1; // an array of structures
    e1.code=12;
    struct employee *ptr;
    ptr = &e1;

    printf("%d", (*ptr).code);
    
    printf("%d", ptr->code); // Exactly same as (*ptr).code

    return 0;
}