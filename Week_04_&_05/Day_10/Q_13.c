/*WAP to print the pattern A
                         A B
                       A B C
                     A B C D*/

#include <stdio.h>

int main()
{
    int num, row;
    printf("Enter the number:");
    scanf("%d", &num);

      for(row = 0; row < num; row++)
    {
        for(int j = 0; j <= row; j++)
        {
            char ch;
            ch= j + 'A';
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}