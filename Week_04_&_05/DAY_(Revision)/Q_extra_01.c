/*WAP to test whether an inputted number is an strong number or not.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, digit, factorial = 1, sum = 0;

    printf("Enter the Number:");
    scanf("%d", &n);

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;

        for (int j = 1; j <= digit; j++)
        {
            factorial = factorial * j;
        }

        sum = sum + factorial;
        factorial = 1;
        temp = temp / 10;
    }
    if (n == sum)
    {
        printf("Yes, the number %d is a strong no. %d", n, sum);
    }
    else
    {
        printf("No, the number %d is not a strong no. %d", n, sum);
    }
    return 0;
}