#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *)calloc(n ,sizeof(int));
    // int arr[n] // This is not allowed in c
    ptr[0] = 5;
    printf("%d", ptr[0]);
    return 0;
}