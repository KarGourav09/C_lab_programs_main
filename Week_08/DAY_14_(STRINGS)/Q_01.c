/*WAP to
find the length of a string with/without using library function for getting
length of the string.
*/

#include <stdio.h>

int main() {
    char str[10];
    printf("Enter the String: ");
    scanf("%[^\n]s",str);

    int length = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    printf("Length of the string is: %d", length);
    return 0;
}