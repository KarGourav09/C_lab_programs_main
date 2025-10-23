/*Write a C program to find the sum of digits of an integer number by using a suitable user defined function.*/

#include <stdio.h>
int sumOfDigits(int n);
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("The sum of digits of %d is %d\n", n, sumOfDigits(n));
    return 0;
}
int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}