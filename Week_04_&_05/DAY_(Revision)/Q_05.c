/*5.WAP to print the following pattern
   *
  ***
 *****
********/

#include <stdio.h>

int main()
{
    int num, row, space, star;
    printf("Enter the number of rows: ");
    scanf("%d", &num);

    for(row = 1; row <= num; row++)
    {
        for(space = 1; space <= num - row; space++)
        {
            printf(" ");
        }
        for(star = 1; star <= (2 * row - 1); star++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}