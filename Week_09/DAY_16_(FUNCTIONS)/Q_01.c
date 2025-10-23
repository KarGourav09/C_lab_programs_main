/*WAP to add two numbers entered through the keyboard by using a suitable user defined function.*/

#include <stdio.h>
int Sum(int,int);
int main() {
    int a,b;
    printf("Enter the two numbers:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Sum = %d\n", Sum(a,b));
    return 0;
}
int Sum(int a,int b)
{
    return a+b;
}

