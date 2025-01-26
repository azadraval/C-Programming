#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=6;
    int *arr;
    arr=(int*) malloc(n*sizeof(int));
    arr[0]=78;
    printf("%d\n",arr[0]);
    return 0;
}