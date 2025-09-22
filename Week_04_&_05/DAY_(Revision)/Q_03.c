/*WAP to test whether an inputted number is an Armstrong number or not.
(A number is said to be Armstrong if sum of cubes of its digit is equal to the original
number(for 3 digit number).*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, digit,sum = 0, cube;

    printf("Enter the Number:");
    scanf("%d", &n);

    temp = n;

    while (temp > 0)
    {
        digit = temp%10;
        cube = pow(digit, 3);
        
        sum = sum + cube;
        temp /=10;
    }
    if (n == sum)
    {
        printf("Yes, the number %d is a Armstrong no.", n, sum);
    }
    else
    {
        printf("No, the number %d is not a Armstrong no.", n, sum);
    }
    return 0;
}