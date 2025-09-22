/*7.WAP to test whether an inputted number is a palindrome number or not.
(A number is said to be Palindrome when its reverse is equal with the original number.*/

#include <stdio.h>

int main()
{
    int num, reverse = 0,digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = num; i > 0; i /= 10)
    {
        digit = i % 10;
        reverse = reverse * 10 + digit;
    }
    if (reverse == num)
    {
        printf("The number is a Palindrome number.\n");
    }
    else
    {
        printf("The number is not a Palindrome number.\n");
    }
    return 0;
}