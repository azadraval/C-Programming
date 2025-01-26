#include <stdio.h>
#include <stdlib.h>
float main()
{
    float n = 5;
    float *ptr;

    ptr = (float *)malloc(n * sizeof(float));
    // float arr[n] // This is not allowed in c
    ptr[0] = 5.124;
    ptr[1] = 1.124;
    ptr[2] = 7.124;
    ptr[3] = 4.124;
    ptr[4] = 9.1241;

    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);
    return 0;
}