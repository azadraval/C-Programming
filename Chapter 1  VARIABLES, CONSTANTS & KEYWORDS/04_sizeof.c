#include<stdio.h>
int main(){
    printf("size of int: %zu bytes\n",sizeof(int));// int takes 4 bytes of memory which is 32 bites.
    printf("size of float: %zu bytes\n",sizeof(float));//float takes 4 bytes of memory which is 32 bites.
    printf("size of char: %zu bytes\n",sizeof(char));// char takes 1 bytes of memory which is 8 bites.
    return 0;
}