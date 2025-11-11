/*WAP to find the largest among three numbers by using a suitable user defined function.*/

#include <stdio.h>
void max(int a,int b,int c);
int main() {
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    max(a,b,c);
    return 0;
}
void max(int a,int b,int c)
{
    if (a > b && a > c) { printf("a is the greatest\n"); return; }
    if (b > a && b > c) { printf("b is the greatest\n"); return; }
    if (c > a && c > b) { printf("c is the greatest\n"); return; }
}