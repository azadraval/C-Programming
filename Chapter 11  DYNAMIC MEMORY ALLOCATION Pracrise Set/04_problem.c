#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    int *arr;
    arr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array is\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    n=10;
    arr=(int*)realloc(arr,10*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array is\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    } 

    return 0;
}