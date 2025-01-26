#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 10;
    int *arr;
    arr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        arr[i]=7*(i+1);
    }
    printf("The array is\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    n=15;
    arr=(int*)realloc(arr,10*sizeof(int));
    for (int i = 0; i < n; i++)
    {
       arr[i]=7*(i+1);
    }
    printf("The array is\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    } 

    return 0;
}