#include<stdio.h>

int sum_natural(int n);
int sum_natural(int n){
    if(n==1){
        return 1;
    }
    return sum_natural(n-1)+n;
}

int main(){
    int n=8;
    printf("the sum of natural number of first %d is %d",n,sum_natural(n));
    
    return 0;
}