#include <stdio.h>

typedef struct employee
{
    int salary;
    float score;
} emp;

int main()
{
    emp e1;
    emp *ptr = &e1;
   
    // (*ptr).salary = 678; // same as below ptr arrow operator
    // (*ptr).score = 554.5434;

    ptr->salary = 678;
    ptr->score = 554.5434;
    printf("The value of salary is %d and value if score is %.2f\n", ptr->salary, ptr->score);

    return 0;
}