/*WAP to read an alphabet from the user and convert it into uppercase if the entered alphabet is 
in lowercase, and into lowercase if the entered alphabet is in uppercase,
otherwise display an appropriate message if no alphabet is entered.
*/

#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 'a' + 'A';
    } else if (ch >= 'A' && ch <= 'Z') {
        ch = ch - 'A' + 'a';
    } else {
        printf("Invalid input! Please enter an alphabet.\n");
        return 1;
    }
    printf("Converted alphabet: %c\n", ch);
    return 0;
}