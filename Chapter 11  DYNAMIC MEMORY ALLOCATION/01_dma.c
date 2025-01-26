#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    // int arr[n] // This is not allowed in c
    ptr[0] = 5;
    ptr[3] = 9;
    printf("%d", ptr[3]);
    return 0;
}