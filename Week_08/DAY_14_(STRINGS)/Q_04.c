/* Write
a program to count the number of vowels, consonants, new lines and the total
number of characters and words present in a string.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter the String: ");
    if (!fgets(str, sizeof(str), stdin)) return 0;

    int consonant = 0, new_line = 0, total_character = 0, space = 0, vowel = 0, words = 0;
    int in_word = 0;

    for (int j = 0; str[j] != '\0'; j++)
    {
        char ch = str[j];
        total_character++;

        if (ch == '\n') {
            new_line++;
        }

        if (ch == ' ') {
            space++;
            in_word = 0;
            continue;
        }

        /* letter check without ctype.h */
        if ( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') )
        {
            /* convert uppercase to lowercase by ASCII arithmetic (no functions) */
            char lower = ch;
            if (ch >= 'A' && ch <= 'Z') lower = ch + ('a' - 'A');

            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowel++;
            } else {
                consonant++;
            }

            if (!in_word) {
                words++;
                in_word = 1;
            }
        } else {
            /* non-letter (digit/punct) ends a word */
            in_word = 0;
        }
    }

    printf("Consonants: %d\nVowels: %d\nSpaces: %d\nTotal characters: %d\nNew lines: %d\nWords: %d\n",
           consonant, vowel, space, total_character, new_line, words);
    return 0;
}