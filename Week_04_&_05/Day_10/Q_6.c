/*WAP to print the pattern     #
                              ##
                             ###
                            ####*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    for(int row = 0; row < num; row++)
    {
        for(int i = (num - row + 1); i > 0; i--)
        {
            printf(" ");
        }
        for(int j = 0; j <= row; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
