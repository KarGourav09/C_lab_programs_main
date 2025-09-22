/*Write a C program to perform swapping of two integers using a third variable.*/

#include <stdio.h>

int main() {
    int a, b, temp;
    // Prompt user for input
    printf("Enter Num1: ");
    scanf("%d", &a);
    printf("Enter Num2: ");
    scanf("%d", &b);
    // Display original values
    printf("Before swapping: Num1 = %d, Num2 = %d\n", a, b);
    // Swap the values using a third variable
    temp = a;
    a = b;
    b = temp;
    // Display swapped values
    printf("After swapping: Num1 = %d, Num2 = %d\n", a, b);
    return 0;
}