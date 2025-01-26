#include <stdio.h>
float c2f(float);
float c2f(float c)
{
    return ((9.0 / 5.0) * c + 32);
}

int main()
{
    float c=37;
printf("%.2f",c2f(c));
    return 0;
}