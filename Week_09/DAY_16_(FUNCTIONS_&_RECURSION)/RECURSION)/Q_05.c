/*Write a C program to determine whether a number is prime or not using a function named as “PRIME”.*/

#include <stdio.h>
void PRIME(int n);
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    PRIME(n);
    return 0;
}
void PRIME(int n)
{
    int i, flag = 0;
    for(i = 2; i <= n / 2; ++i)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (!flag)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);
}