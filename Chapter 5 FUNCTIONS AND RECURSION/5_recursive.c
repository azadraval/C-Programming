#include <stdio.h>

int factorial(int);
// Factorial(n)=1x2x3x...xn-1xn
// Factorial(n-1)=1x2x3x...xn-1
// Factorial(n)=Factorial(n-1)xn

int factorial(int n)
{
    if (n == 0 || n == 1)//Base condition
    {
        return 1;
    }
    return factorial(n - 1) * n;
}

int main()
{
    int a = 9;
    printf("The factorial of %d is %d ", a, factorial(a));

    return 0;
}