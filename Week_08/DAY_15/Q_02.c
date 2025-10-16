/*2.Write a program to extract last character of every word present in a sentence. without using library*/
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter the Sentence: ");
    scanf(" %[^\n]", str);

    int i = 0;
    printf("Last characters of each word: ");
    for(i; str[i] != 0; i++) {
        if(str[i] == '\0') 
        {
            break;
        }

        if(str[i] == ' ') {
            printf("%c ", str[i-1]);
        }
        else if(str[i+1] == '\0') {
            printf("%c", str[i]);
        }
        else {
            continue;
        }
    }
    return 0;
}