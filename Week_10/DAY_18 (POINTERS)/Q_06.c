/*6.Write a C program to
print a string using pointer.*/

#include <stdio.h>
void inputdata(char*);
void showdata(char*);
int main() {
    char str[100];
    inputdata(str);
    showdata(str);
    return 0;
}
























void inputdata(char* str) {
    printf("Enter a string: ");
    gets(str);
}
void showdata(char* str) {
    puts(str);
}