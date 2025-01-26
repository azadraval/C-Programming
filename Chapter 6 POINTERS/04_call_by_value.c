#include<stdio.h>

int sum(int,int);
int sum(int a, int b){
    return a+b;
}

int main(){
    printf("The value of 1 & 65 is %d",sum(1,65));
    
    return 0;
}