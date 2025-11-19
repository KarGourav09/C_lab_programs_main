/*Find reverse of a integer using Recursion*/

#include <stdio.h>
int reverse(int n,int r);
int main() {
    int n,r=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    r = reverse(n,r);
    printf("Reverse: %d",r);
    return 0;
}
int reverse(int n,int r)
{
    if(n == 0)
    {
        return r;
    }
    else return reverse(n/10,r*10 + n%10);
}