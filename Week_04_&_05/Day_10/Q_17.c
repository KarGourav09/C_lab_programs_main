/*WAP to print the pattern *
                         * * *
                       * * * * * 
*/

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
            printf("* ");
        }
        for(int j = row - 1; j > 0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}