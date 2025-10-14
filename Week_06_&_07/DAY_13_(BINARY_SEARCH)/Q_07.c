/*WAP to multiply two matrices of order 3x3 and
display it.*/

#include <stdio.h>

int main()
{
    int a, b, p, q, n, N;
    printf("Enter number of rows: ");
    scanf("%d", &a);
    printf("Enter number of coulmns: ");
    scanf("%d", &b);

    n = a * b;

    printf("Enter the first array: \n");

    int arr1[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Rows[%d] Coulmns[%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter number of rows: ");
    scanf("%d", &p);
    printf("Enter number of coulmns: ");
    scanf("%d", &q);

    N = p * q;

    if (b != p)
    {
        printf("Matrix multiplication not possible!\n");
        return 1;
    }

    printf("Enter the second array: \n");
    int arr2[p][q];

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("Rows[%d] Coulmns[%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    int multi[a][q];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            multi[i][j] = 0;
            for (int k = 0; k < b; k++)
            {
                multi[i][j] += arr1[i][k] * arr2[k][j];
            }
            printf(" %d", multi[i][j]);
        }
        printf("\n");
    }
    return 0;
}