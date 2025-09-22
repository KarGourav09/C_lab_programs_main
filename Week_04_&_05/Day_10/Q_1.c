/*WAP to print the pattern 1
                           2 2
                           3 3 3
                           4 4 4 4 */

#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 0; i <= num; i++)
    {
        for(int j = 1; j <=i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}