#include<stdio.h>

int main(){
    int age=67;
    if(age>60){
        printf("You can drive and you are senior citizen ");
    }
    else if(age>33){
        printf("You can drive and you are elder ");
    }
    else if(age>18){
        printf("You can drive");
    }
    else{
        printf("You can't drive");
    }
    return 0;
}