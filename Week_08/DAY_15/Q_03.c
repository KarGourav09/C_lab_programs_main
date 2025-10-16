/*3.Write a C program to extract a substring from a given string. Prompt the user to enter the
starting position and length of the substring.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter the Sentence: ");
    scanf(" %[^\n]", str);

    int i = 0, start_pt;

    printf("enter the starting point: ");
    scanf("%d",&start_pt);

    if(start_pt > 0 && start_pt < strlen(str))
        {
            for(int j = start_pt; j < strlen(str); j++)
            {
                printf("%c",str[j]);
            }
        }
    return 0;
}