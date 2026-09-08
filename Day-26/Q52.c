Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= i * 2; j++)
        {
            printf("*\n");
        }

        printf("\n");
    }

    return 0;
}
