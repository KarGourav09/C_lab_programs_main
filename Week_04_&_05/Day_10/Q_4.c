/*WAP to print the pattern 1
                         1 0 
                       1 0 1 
                     1 0 1 0*/

#include <stdio.h>

int main ()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    for(int i = 0; i < num; i++)
    {
        for(int k = (num - i + 1); k > 0; k--)
        {
            printf(" ");
        }
        for(int j = 0; j <= i; j++)
        {
            if(j%2 == 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}