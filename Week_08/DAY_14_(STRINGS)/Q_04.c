/* Write
a program to count the number of vowels, consonants, new lines and the total
number of characters and words present in a string.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter the String: ");
    scanf(" %[^\n]", str);

    int consonant = 0, new_line = 0, total_character = 0, space = 0, vowel = 0;

    for(int j = 0; j < strlen(str) - 1; j++)
    {
        if(j <= 'A' || j >= 'a')
        {
            total_character++;

            if(j == 'A' || j == 'E'|| j == 'I'|| j == 'O'|| j == 'U'|| j == 'a'|| j == 'e'|| j == 'i'|| j == 'o'|| j == 'u' )
            {
            vowel++;
            }
            else
            {
                consonant++;
            }
        }
        else if (j == ' ')
        {
            space++;
        }
        else if (j == '.')
        {
            new_line++;
        }
        else
        {
            continue;
        }
    }

    printf("Consonant: %d\n vowel: %d\n space: %d\n total character: %d\n new line: %d\n",consonant,vowel,space,total_character,new_line);
    return 0;
}