#include<stdio.h>
#include<string.h>
typedef struct employee{
        int code;
        float salary;
        char name[20];

    }Emp;
     

int main(){
    // typedef int azad;
    // azad a=76;
    // printf("the value of a is %d",a);
    Emp e1;
    e1.code=5432;
    Emp*ptr1=&e1;
    strcpy(e1.name,"Azad");
    e1.salary=67.54;
    printf("%d %s %f \n",e1.code,e1.name,e1.salary);
    printf("%d %s %f \n",ptr1->code,ptr1->name,ptr1->salary);
    
    return 0;
}