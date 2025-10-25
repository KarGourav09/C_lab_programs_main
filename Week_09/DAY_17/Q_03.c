/*3.WAP to Find sum of n numbers using recursion.*/

#include <stdio.h>
int sum(int n);
int main() {
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("Sum: %d",sum(n));
    return 0;
}
int sum(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    else return n + sum(n-1);
}