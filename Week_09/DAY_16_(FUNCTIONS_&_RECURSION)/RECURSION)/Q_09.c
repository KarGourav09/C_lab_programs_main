/*Write a C program to display the reverse of an integer number by using a suitable user defined function*/

#include <stdio.h>
int Reverse(int n);
int main() {
    int n;
    printf("Enter an integer n: ");
    scanf("%d", &n);
    Reverse(n);
    return 0;
}
int Reverse(int n) {
    int reversed = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    printf("Reversed number: %d\n", reversed);

}