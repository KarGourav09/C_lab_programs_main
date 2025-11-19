/*1. Write a C program to check whether a number is even or odd using call by address*/

#include <stdio.h>
void check(int* ptr);
int main() {
    int n;
    int* ptr = &n;
    printf("Enter the number: ");
    scanf("%d",ptr);
    check(ptr);
    return 0;
}
void check(int* ptr)
{
    if(*ptr%2 == 0)
    {
        printf("%d is even number\n", *ptr);
    }
    else
    {
        printf("%d is odd number\n", *ptr);
    }
}