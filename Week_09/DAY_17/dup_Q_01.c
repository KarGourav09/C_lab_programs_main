/*WAP to find out the value of nth term of the Fibonacci sequence by writing a suitable user defined function without recursion.*/

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
    if (n == 1) {
        return 1;
    }
    int a = 0;
    int b = 1;
    int c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}