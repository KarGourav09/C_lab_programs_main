/*1.WAP to find nth term in  Fibonacci series using recursion.*/

#include <stdio.h>
int Fibo(int n);
int main() {
    int n;
    printf("Enter the nth term: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter a non-negative number\n");
        return 1;
    }
    printf("The value of fibonacci series is %d", Fibo(n));
    return 0;
}
int Fibo(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    return Fibo(n - 1) + Fibo(n - 2);
}