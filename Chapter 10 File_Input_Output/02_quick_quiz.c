#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file2.txt", "r");
    int num;
    if (ptr == NULL)
    {
        printf("The file does not exist sorry!\n");
    }
    else
    {

        fscanf(ptr, "%d", &num);
        printf("The value of num is %d \n", num);
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d \n", num);
    }
    fclose(ptr);

    return 0;
}