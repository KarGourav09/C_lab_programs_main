/*WAP to test whether a number is Perfect Number or not.*/

#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    if (sum == num)
    {
        printf("The number is a Perfect Number.\n");
    }
    else
    {
        printf("The number is not a Perfect Number.\n");
    }

    return 0;
}