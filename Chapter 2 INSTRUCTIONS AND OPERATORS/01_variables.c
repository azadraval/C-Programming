#include <stdio.h>

int main()
{

    int i = 10;
    int j = i;
    int a = 3, b = 3, c = 4, d = 5;

    // variable/a is name of memory location
    //%d is called format specifier
    //%d is for int, %f is for float and %c is for char
    // alt+shift+ down arrow replicate the line
    // alt+ click can do multiple cursor can be used to changed multiple values or add something

    printf("The value of i is %d and value of j is %d\n", i, j);
    printf("The value of a is %d and value of b is %d\n", a, b);
    printf("The value of c is %d and value of d is %d\n", c, d);
    return 0;
}