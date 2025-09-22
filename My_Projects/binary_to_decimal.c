#include <stdio.h>
#include <math.h>

int main()
{
    int n, nsave, rem, dec = 0, pos = 0;
    printf("Enter a binary number:");
    scanf("%d", &n);
    nsave = n;
    while (n > 0)
    {
        rem = n % 10;
        dec = dec + rem * pow(2, pos);
        pos++;
        n = n / 10;
    }
    printf("The decimal equivalent of %d is %d\n", nsave, dec);
    return 0;
}