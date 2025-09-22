/*WAP to print the pattern
                         1
                       1 2 1
                     1 2 3 2 1
                   1 2 3 4 3 2 1*/

#include <stdio.h>

int main()
{
    int num, row;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(row = 1; row <= num; row++)
    {
        for(int i = 1; i <= num - row; i++)
        {
            printf("  ");
        }
        for(int j = 1; j <= row; j++)
        {
            printf("%d ", j);
        }
        for(int j = row - 1; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}