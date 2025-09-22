/*WAP to print GCD and LCM of two numbers.*/

#include <stdio.h>

int main()
{
    int num1, num2, gcd, lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate GCD
    for(int i = 1; i <= (num1 < num2 ? num1 : num2); i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    // Calculate LCM
    lcm = (num1 * num2) / gcd;

    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}