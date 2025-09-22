/*WAP to print the pattern 1
                           0 0 
                           1 1 1 
                           0 0 0 0 */

#include <stdio.h>

int main ()
{
    int num,i;
    printf("Enter the number:");
    scanf("%d",&num);

    for(i = 0; i < num; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(i%2 == 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}