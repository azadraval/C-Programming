#include <stdio.h>

int main()
{
    /*
    ASCII value
    from 97 to 122 are lowercase alphabet &
    from 65 to 90 are uppercase alphabet
    */
    char ch = 'x';
    printf("The character is %c\n", ch);
    printf("The value of character is %d\n", ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("The character is lowercase \n");
    }
    else
    {
        printf("The character is not lower case \n");
    }
    return 0;
}