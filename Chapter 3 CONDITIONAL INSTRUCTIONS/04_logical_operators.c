#include<stdio.h>

int main(){
    // int a=1,b=1;
    // printf("The value of a and b is %d\n",a&&b);
    // printf("The value of a or b is %d",a||b);
    // out of above is: The value of a and b is 1, The value of a or b is 1
    int a=1,b=1;
    printf("The value of a and b is %d\n",a&&b);
    printf("The value of a or b is %d\n",a||b);
    printf("The value of a is %d or b is %d\n",!a,!b);
    
    if (a&&b){
        printf("both are true\n");
    }
    if (a){
        if(b){
            printf("both are true");
        }
    }
    return 0;
}