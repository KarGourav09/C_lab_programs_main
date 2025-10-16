/*4.Write a program to reverse a string without library function.*/

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter the Sentence: ");
    scanf(" %[^\n]", str);

    int length = 0;
    for(int i = 0; i < str[i] != '\0'; i++)
    {
        length++;
    }

    for(int j = length; j >= 0; j--)
    {
        printf("%c", str[j]);
    }
    return 0;
}