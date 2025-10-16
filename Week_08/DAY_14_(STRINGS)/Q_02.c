/*Write
a program to concatenate two strings without using any library function.*/

#include <stdio.h>

int main() {
    char str1[100];
    printf("Enter the String: ");
    scanf(" %[^\n]", str1);

    char str2[100];
    printf("Enter the String: ");
    scanf(" %[^\n]", str2);

    int length1 = 0;
    for (int i = 0; str1[i] != '\0'; i++){
        length1++;
    }

    int length2 = 0;
    for (int i = 0; str2[i] != '\0'; i++) {
        length2++;
    }

    int totalLength = length1 + length2;

    /* +1 for the null terminator */
    char str3[totalLength + 1];

    for (int i = 0; i < length1; i++) {
        str3[i] = str1[i];
    }

    for (int i = 0; i < length2; i++) {
        str3[length1 + i] = str2[i];
    }

    str3[length1 + length2] = '\0';

    printf("Concatenated string: %s\n", str3);
    return 0;
}