/*WAP for a two dimensional array to store and
display the elements. (Store temperature of two cities for a week and display
it)*/

#include <stdio.h>

int main() {
    int a,b,n;
    printf("Enter number of cities: ");
    scanf("%d", &a);
    printf("Enter number of days: ");
    scanf("%d", &b);

    n = a*b;

    int arr[a][b];

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
        printf("Cities[%d] Days[%d]: ", i+1,j+1);
        scanf("%d", &arr[i][j]);
        }
    }

    printf("2D Array contents are: ");
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
         printf("Cities[%d] Days[%d]: %d\n",i+1,j+1, arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}