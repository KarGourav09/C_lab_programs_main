/*Write
a program to check whether an entered string is palindrome or not.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter the String: ");
    scanf(" %[^\n]", str);

    int i, j;
    for (i = 0, j =strlen(str) - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            printf("The String is not a Palindrome\n");
            return 0;
        }
    }
    printf("The String is a Palindrome\n");
    return 0;
}