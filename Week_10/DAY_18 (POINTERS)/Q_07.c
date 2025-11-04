/*7.Write a C program to reverse a string using pointer*/
#include <stdio.h>
void inputdata(char*);
void reversedata(char*);
void showdata(char*);
int main() {
    char str[100];
    inputdata(str);
    reversedata(str);
    showdata(str);
    return 0;
}
























void inputdata(char* str) {
    printf("Enter a string: ");
    fgets(str, 100, stdin);
}
void reversedata(char* str) {
    char* startptr = str;
    char* endptr = str;
    while(*endptr != '\0' && *endptr != '\n') {
        endptr++;
    }
    endptr--; // Move back from null terminator or newline to last character
    while(startptr < endptr) {
        char temp = *startptr;
        *startptr = *endptr;
        *endptr = temp;
        startptr++;
        endptr--;
    }
}
void showdata(char* str) {
    printf("Reversed string: %s\n", str);
}