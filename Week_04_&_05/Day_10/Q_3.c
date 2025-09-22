/*WAP to print the pattern 
                           #
                           ##
                           ###
                           #### */

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 0; i <= num; i++)
    {
        for(int j = 1; j <=i; j++)
        {
        printf("#");
        }
        printf("\n");
    }
    return 0;
}