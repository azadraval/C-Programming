#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    return 0;
}

//cd /d "D:\DSA\C\Chapter 4 - Practice Set"