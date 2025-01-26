#include <stdio.h>

struct employee
{
    int code;// This declares a new user defined data types
    float salary;
    char name[30];
};//Semicolons is important
int main()
{
    struct employee facebook[100];// an array of structures

    facebook[0].code=100;
    facebook[1].code=77;
    struct employee azad={100, 72.22,"azad"};

    printf("%d %f %s",azad.code,azad.salary,azad.name);
    
     
    return 0;
}