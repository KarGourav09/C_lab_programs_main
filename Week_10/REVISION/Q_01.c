/*1.Write a C program to perform swapping of two integers without using a third variable.*/

#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    b = b + a;
    a = b - a;
    b = b - a;
    printf("After swapping the values of a: %d and b: %d",a,b);
    return 0;
}