/*WAP to find if the inputted number is a alphabet or a special character*/

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("The character is an alphabet.\n");
    } else {
        printf("The character is a special character.\n");
    }

    return 0;
}