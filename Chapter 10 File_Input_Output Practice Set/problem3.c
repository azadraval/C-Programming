#include <stdio.h>

int main()
{

    char ch;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("file2.txt", "r");
    ptr2 = fopen("azad.txt", "a");
    while (1)
    {
         ch = fgetc(ptr);
        // When all the content of file has read break
        if (ch == EOF)
        {
            break;
        }
        else
        {
           
            fprintf(ptr2,"%c",ch);
            fprintf(ptr2,"%c",ch);
            printf("%c", ch);
        }
    }

    return 0;
}