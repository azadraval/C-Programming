#include<stdio.h>
 
int main(){
    int i=5;
    
    printf("The value of i is %d\n",i);
    i=i+5;

    printf("The value of i is %d\n",i);

    // i++ prints i first and then increments (Post increment Operators)
    // ++i increments i first and then prints (Post increment Operators)
    printf("The value of i is %d\n",++i);
    // compound assignment operators
    i+=2;
    printf("The value of i is %d\n",i);


       
    
    return 0;
}