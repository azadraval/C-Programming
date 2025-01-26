#include <stdio.h>

int main()
{
    int i = 23;
    int *j = &i; // j is a pointer pointing to i(j is interger pointer)
    printf("The address of the i is %p \n", &i);
    printf("The address of the i is %p \n", j);
    printf("The value at address is %d \n", *j);
    printf("The value at address is %d \n", *(&i));
    printf("The value at address is %p \n", &j);
    return 0;
}