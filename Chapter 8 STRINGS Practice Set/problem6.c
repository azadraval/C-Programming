// Write a program to encrypt a string by adding 1 to ascii of its characters.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Azad Raval";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }

    printf("%s", str);

    return 0;
}