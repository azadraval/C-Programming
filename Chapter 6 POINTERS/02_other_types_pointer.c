#include <stdio.h>

int main()
{
    // Declare a character variable 'i' and assign the value 'A' to it
    char i = 'A';
    
    // Declare a pointer 'j' and make it point to 'i'
    char *j = &i;
    
    // Declare a float variable 'k' and assign the value 2.7654 to it
    float k = 2.7654;
    
    // Declare a pointer 'l' and make it point to 'k'
    float *l = &k;

    // Print the address of the variable 'i'
    printf("The address of i is %p \n", (void*)&i);
    
    // Print the address stored in pointer 'j' (which should be the address of 'i')
    printf("The address of i is %p \n", (void*)j);
    
    // Print the value at the address stored in pointer 'j' (which should be the value of 'i')
    printf("The value at address is %c \n", *j);
    
    // Print the value at the address of 'i' (another way to get the value of 'i')
    printf("The value at address is %c \n", *(&i));
    
    // Print the address of the pointer 'j'
    printf("The value at address is %p \n", (void*)&j);
    
    // Print the address of the variable 'k'
    printf("The address of k is %p \n", (void*)&k);
    
    // Print the address stored in pointer 'l' (which should be the address of 'k')
    printf("The address of k is %p \n", (void*)l);
    
    // Print the value at the address stored in pointer 'l' (which should be the value of 'k')
    printf("The value at address is %f \n", *l);
    
    // Print the value at the address of 'k' (another way to get the value of 'k')
    printf("The value at address is %f \n", *(&k));
    
    // Print the address of the pointer 'l'
    printf("The value at address is %p \n", (void*)&l);

    return 0;
}
