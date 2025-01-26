#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("file.txt", "w");
    int num=654;
    fprintf(fptr,"%d",num);
    fclose(fptr);

    

    return 0;
}