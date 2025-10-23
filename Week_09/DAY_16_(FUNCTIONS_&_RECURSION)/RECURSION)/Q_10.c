/* Write a C program to  or check the number is palindrome number or not by using a suitable user defined function.*/

#include <stdio.h>
void Palindrome(int n);
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    Palindrome(n);
    return 0;
}


void Palindrome(int n)
{
    int reverse = 0,digit;
    for(int i = n; i > 0; i /= 10)
    {
        digit = i % 10;
        reverse = reverse * 10 + digit;
    }
    if (reverse == n)
    {
        printf("The number is a Palindrome number.\n");
    }
    else
    {
        printf("The number is not a Palindrome number.\n");
    }
}