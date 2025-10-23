/*Write a program to replace all the occurrence of a particular character in a string by its previous 3rd character, If any.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter the String: ");
    scanf("%[^\n]", str);

    printf("which character you want to replace: ");
    char ch;
    scanf(" %c", &ch);

    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (i >= 3 && str[i] == ch) {
            str[i] = str[i - 3];
        }
    }
    printf("Modified string: %s\n", str);
    return 0;
}