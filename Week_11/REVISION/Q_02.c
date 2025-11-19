/*2. Write a C program to display the reverse of an integer number by using call by address*/

#include <stdio.h>
void reverse(int* ptr);
int main() {
    int n;
    int* ptr = &n;
    printf("Enter the number: ");
    scanf("%d", ptr);
    reverse(ptr);
    return 0;
}
void reverse(int* ptr)
{
    int rev = 0;
    while(*ptr != 0)
    {
        rev = rev * 10 + *ptr % 10;
        *ptr /= 10;
    }
    printf("Reverse is: %d\n", rev);
}