/*WAP to read an alphabet from the user and convert it into uppercase if the entered alphabet is 
in lowercase, otherwise display an appropriate message.
*/

#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 'a' + 'A';
        printf("Uppercase: %c\n", ch);
    }
    else {
        printf("Enter a valid lowercase alphabet.\n");
    }
    return 0;
}