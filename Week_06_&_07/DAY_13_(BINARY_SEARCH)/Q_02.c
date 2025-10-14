/*2. WAP to find the sum of two matrices of order
2x2 using multidimensional arrays.*/

#include <stdio.h>

int main() {
    int a,b,n;
    printf("Enter number of coulmn in first matrix: ");
    scanf("%d", &a);
    printf("Enter number of rows in first matrix: ");
    scanf("%d", &b);

    n = a*b;

    int arr1[a][b];

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
        printf("Element[%d][%d]: ", i,j);
        scanf("%d", &arr1[i][j]);
        }
    }

    int c,d,N;
    printf("Enter number of coulmn in second matrix: ");
    scanf("%d", &c);
    printf("Enter number of rows in second matrix: ");
    scanf("%d", &d);

    N = c*d;

    /* Validate that both matrices have the same positive dimensions for addition */
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0 || a != c || b != d)
    {
        printf("Enter matrices of the same positive order to add\n");
        return 1;
    }

    int arr2[c][d];

    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < d; j++)
        {
        printf("Element[%d][%d]: ", i,j);
        scanf("%d", &arr2[i][j]);
        }
    }

    int sum[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("\nSum of two matrices:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf(" %d", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}