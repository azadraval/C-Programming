#include <stdio.h>
int main()
{
    for (int i = 0; i < 20; i++)
    {
        if (i == 9)
        {
            // break; //exit this loop now!
            continue;//skip this iteration now
        }

        printf("i is %d\n", i);
    }

    return 0;
}