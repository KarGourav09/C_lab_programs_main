/*5.WAP to copy one string to another without using library function.*/

#include <stdio.h>

int main(void) {
    char str1[100];
    printf("Enter the String1: ");
    scanf(" %[^\n]", str1);

    char str2[100];
    int i;
    for (i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("Copied string: %s\n", str2);
    return 0;
}