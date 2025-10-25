/*5. WAP to find GCD of Two Numbers using Recursion*/

#include <stdio.h>
int gcd(int,int);
int main() {
    int a,b;
    printf("Enter the two numbers:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("gcd is %d\n", gcd(a,b));
    return 0;
}
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}