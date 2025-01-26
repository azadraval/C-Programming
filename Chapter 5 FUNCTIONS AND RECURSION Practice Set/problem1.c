#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    int a = 2, b = 76, c = 45;
    printf("The average of a b & C is %f", average(a, b, c));

    return 0;
}