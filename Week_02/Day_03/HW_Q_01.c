/*Write a C program to perform swapping of two integers without using a third variable.*/

#include <stdio.h>

int main() {
    int a, b;
    // Prompt user for input
    printf("Enter Num1: ");
    scanf("%d", &a);
    printf("Enter Num2: ");
    scanf("%d", &b);
    // Display original values
    printf("Before swapping: Num1 = %d, Num2 = %d\n", a, b);
    // Swap the values without using a third variable
    a = a + b; // Step 1: Add both numbers
    b = a - b; // Step 2: Subtract the new value of 'a' by 'b' to get original 'a'
    a = a - b;
    // Step 3: Subtract the new value of 'a' by the new value of 'b' to get original 'b'
    // Display swapped values
    printf("After swapping: Num1 = %d, Num2 = %d\n", a, b);
    return 0;
}