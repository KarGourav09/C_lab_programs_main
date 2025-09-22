/*WAP to print the pattern 4
                         3 3
                       2 2 2
                     1 1 1 1 */

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++)
    {
        for(int j = 1; j < num - i; j++)
        {
            printf("  ");
        }
        for(int k = 0; k <= i; k++)
        {
            printf("%d ", num - i);
        }
        printf("\n");
    }

}