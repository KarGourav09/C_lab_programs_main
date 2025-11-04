#include <stdio.h>
void palindrome (int n);
int main() {
    int n;
    printf("Enter the three digit number: \n");
    scanf("%d",n);
    palindrome(n);
    return 0;
}
void palindrome (int n)
{
    int r, sum = 0, temp;
    temp = n;
    while (n > 0) {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
        printf("The number is palindrome\n");
    else
        printf("The number is not palindrome\n");
}