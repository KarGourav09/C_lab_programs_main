/*WAP
to find out sum of digits of a number.*/

#include <stdio.h>

int main()
{
    int n,n1,digit,sum = 0;

    printf("Number:");
    scanf("%d", &n);
    while(n!=0)
    {
        digit = n%10;
        sum = sum + digit;
        n = n / 10;
    }
    printf("sum: %d", sum);

    return 0;
}