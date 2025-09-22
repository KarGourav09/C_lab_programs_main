#include <stdio.h>

int main()
{
    int i,j,n,sum = 0,tsum;
    printf("Enter number:");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        tsum = 0;
        for(j = 1; j <= i; j++)
        {
            sum = sum + j;
            tsum = tsum + sum;
        }
        sum = 0;
    }
    printf("total sum:%d\n", tsum);
    return 0;
}