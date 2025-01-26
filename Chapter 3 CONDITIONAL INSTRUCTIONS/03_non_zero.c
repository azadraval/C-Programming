#include<stdio.h>

int main(){
    if (1){
        printf("This if is executed!\n");

    }
    if(34567){
        printf("This if is also executed!\n");
    }
    if(34.567){
        printf("This if is also executed!\n");
    }
    if('a'){
        printf("This character inside if is also executed!\n");
    }
    if(0){
        printf("I am zero I am not executed\n");
    }
    return 0;
}