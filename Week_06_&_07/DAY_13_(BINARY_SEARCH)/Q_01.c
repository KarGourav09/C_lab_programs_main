/*Initialse and Display a 2-d array*/

#include <stdio.h>

int main() {
    int a,b,n;
    printf("Enter the number of coulmn in the array: ");
    scanf("%d", &a);
    printf("Enter the number of row in the array: ");
    scanf("%d", &b);

    n = a*b;

    int arr[a][b];

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
        printf("Enter the number[%d][%d]: ", i,j);
        scanf("%d", &arr[i][j]);
        }
    }

    printf("Array contents are: ");
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
         printf(" %d\n",arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}