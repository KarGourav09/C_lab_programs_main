/*Write a program to count the frequency of each character present in a string. */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter the Sentence: ");
    scanf(" %[^\n]", str);

    int count;
    int len = 0;
    while (str[len] != '\0')
        len++;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 0)
            continue;
        int alphabet = str[i];
        count = 1;
        for (int j = i + 1; j < len; j++)
        {
            if (alphabet == str[j])
            {
                count++;
                str[j] = 0;
            }
        }
        printf("%c comes %d times\n", str[i], count);
    }


    return 0;
}