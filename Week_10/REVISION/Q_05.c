/*5. WAP to test whether a number is Palindrome Number or not.
(A number is said to be Palindrome when its reverse is equal with the original number.*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int rev = 0;
    for(int i = n; i>0; i/=10) {
        int temp = i%10;
        rev = rev*10 + temp;
    }
    if(rev == n)
        printf("%d is a palindrome number\n", n);
    else
        printf("%d is not a palindrome number\n", n);
    return 0;
}