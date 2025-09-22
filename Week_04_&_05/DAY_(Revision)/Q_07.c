/*WAP to print the following pattern
1
2 1
1 2 3
4 3 2 1
1 2 3 4 5*/

#include <stdio.h>

int main()
{
    int i, j, num = 5, count = 1;

    for(i = 1; i <= num; i++)
    {
        if(i % 2 == 0) // Even row
        {
            for(j = i; j >= 1; j--)
            {
                printf("%d ", j);
            }
        }
        else // Odd row
        {
            for(j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }

    return 0;
}