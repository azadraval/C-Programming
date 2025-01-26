#include <stdio.h>

int main()
{

    char ch;
    FILE *ptr;
    ptr = fopen("file.txt", "r");
    while (1)
    {
        ch = fgetc(ptr);
        printf("%c", ch);
        //When all the content of file has read break
        if (ch == EOF)
        {
            break;
        }
    }

    return 0;
}