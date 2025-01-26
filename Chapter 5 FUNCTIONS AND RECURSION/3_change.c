#include <stdio.h>
// Fuction prototype
int change(int a);

// Function definition
int change(int a)
{
     int a = 77;//Misnomer
    return 0;
}
int main()
{
    int b = 22;
    change(b); // Value of b reamians 22
    printf("b is %d", b);

    return 0;
}
