#include<stdio.h>

int sum(int* ,int*);
int sum(int *a, int *b){
    *a=7;
    return *a+*b;
}

int main(){
    int x=8,y=9;
    printf("The value of 1 & 65 is %d\n",sum(&x,&y));
    printf("The value x is %d\n",x);
    
    return 0;
}