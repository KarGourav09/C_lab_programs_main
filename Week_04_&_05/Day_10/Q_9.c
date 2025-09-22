/*WAP to print the pattern 1
                         1 2
                       1 2 3
                     1 2 3 4 */

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
            printf("%d ", k + 1);
        }
        printf("\n");
    }

}