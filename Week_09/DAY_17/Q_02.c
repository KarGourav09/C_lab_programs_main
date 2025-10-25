/*2.WAP to find the factorial of a number using recursion.*/

#include <stdio.h>
int fact(int n);
int main() {
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("factorial: %d",fact(n));
    return 0;
}
int fact(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    else return n * fact(n-1);
}