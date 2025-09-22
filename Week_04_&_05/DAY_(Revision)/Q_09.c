/*WAP to sum the following series S=1+(1+2)+(1+2+3)+...+(1+2+3+...+n)*/

#include <stdio.h>

int main()
{
    int n, sum = 0, termSum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        termSum = 0;
        for(int j = 1; j <= i; j++)
        {
            termSum += j;
        }
        sum += termSum;
    }

    printf("The sum of the series is: %d\n", sum);

    return 0;
}