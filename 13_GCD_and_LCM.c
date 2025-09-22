/*WAP to find the GCD andd LCM of two numbers using for loop.*/

#include <stdio.h>

int main()
{
    int a, b, gcd;

    printf("Enter two numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);

    for (int i = 1; i <= a || i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    printf("GCD of %d and %d is %d\n", a, b, gcd);
    int lcm = (a * b) / gcd;
    printf("LCM of %d and %d is %d\n", a, b, lcm);
    return 0;
}