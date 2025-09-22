/*WAP to test whether an inputted number is a strong number or not.
(A number is said to be Strong if sum of factorial of digits is equal to the original
number).*/

#include <stdio.h>

int main()
{
    int num, num1, digit, sum = 0, factorial = 1;
    ;
    printf("Enter a number: ");
    scanf("%d", &num);

    num1 = num;

    while (num > 0)
    {
        digit = num % 10;
        for (int i = 1; i <= digit; i++)
        {
            factorial *= i;
        }
        sum += factorial;
        factorial = 1;
        num /= 10;
    }
    if (sum == num1)
    {
        printf("The number is a Strong number.\n");
    }
    else
    {
        printf("The number is not a Strong number.\n");
    }
    return 0;
}