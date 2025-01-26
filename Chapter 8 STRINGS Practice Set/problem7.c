// Decrypt thr problem 6

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "B{be!Sbwbm";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }

    printf("%s", str);

    return 0;
}