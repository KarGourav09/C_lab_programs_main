/*WAP to print the pattern 1
                         0 0
                       1 1 1
                     0 0 0 0 */

#include <stdio.h>

int main()
{
    int num,row;

    printf("Enter the number:");
    scanf("%d", &num);

    for(row = 0; row < num; row++)
    {
        for(int i = (num - row + 1); i > 0; i--)
        {
            printf(" ");
        }
        for(int j = 0; j <= row; j++)
        {
            if(row%2 == 0)
            {
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}