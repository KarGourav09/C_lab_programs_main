/*1.WAP to compare two strings with/without using library function.*/

#include <stdio.h>

int main() {
    char str1[100];
    printf("Enter the String1: ");
    scanf(" %[^\n]", str1);

    char str2[100];
    printf("Enter the String2: ");
    scanf(" %[^\n]", str2);

    int length1 = 0;
    for (int i = 0; str1[i] != '\0'; i++){
        length1++;
    }

    int length2 = 0;
    for (int i = 0; str2[i] != '\0'; i++) {
        length2++;
    }

    if (length1 != length2) {
        printf("The strings are not equal.\n");
        return 0;
    }
    else
    {
        printf("The strings are equal.\n");
    }
    return 0;
}