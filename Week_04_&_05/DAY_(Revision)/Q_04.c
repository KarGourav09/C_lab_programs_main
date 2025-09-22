/*WAP to find out sum of series up to n terms

1^2+ 2^2 + 3^2 +……….+n*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n,total = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        total = total + pow(i,2);
    }
    printf("Total is %d", total);
    return 0;
}
