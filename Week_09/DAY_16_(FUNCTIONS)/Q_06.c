/*Write a C program to perform swapping of two integers using a function SWAP. */

#include <stdio.h>
int Swap(int a,int b);
int main() {
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    Swap(a,b);
    return 0;
}
int Swap(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("value of a = %d and b = %d\n",a,b);
}

