#include<stdio.h>
 
int main(){
    int a=11,b=4,c=2,d=9;
    if(a>b && a>c && a>d){
        printf("The greatest number is %d",a);
    }
    else if(a<b && b>c && b>d){
        printf("The greatest number is %d",b);
    }
    else if(c>b && a<c && c>d){
        printf("The greatest number is %d",c);
    }
    else if(d>b && d>c && b<d){
        printf("The greatest number is %d",d);
    }
    return 0;
}
