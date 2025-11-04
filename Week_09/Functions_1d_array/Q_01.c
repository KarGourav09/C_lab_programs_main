/*WAP to design a user defined function to calculate the sum of the elements of an integer 1-D array.*/

#include <stdio.h>
int sum(int n);
int main() {
    int n;
    printf("enter the integer: ");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
int sum(int n)
{
    if(n<=0)
    {
        return 0;
    }
    else return n%10 + sum(n/10);
}