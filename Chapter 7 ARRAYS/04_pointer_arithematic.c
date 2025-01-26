#include<stdio.h>


int main(){
    // Pointer arithematic using integer pointer
    // int a=5;
    // int *ptr=&a;
    // printf("the address of a is %u\n",&a);
    // printf("the address of a is %u\n",ptr);
    // ptr++;
    // printf("the  value of ptr is %u\n",ptr);


    // Pointer arithematic using character pointer

    char a='A';
    char *ptr=&a;
    printf("the address of a is %u\n",&a);
    printf("the address of a is %u\n",ptr);
    ptr++;
    printf("the  value of ptr is %u\n",ptr);
    
    return 0;
}