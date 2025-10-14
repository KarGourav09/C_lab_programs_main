/*WAP to find the
transpose of a matrix of size 3x2*/

#include <stdio.h>

int main() {
    int a,b,n;
    printf("Enter number of coulmn: ");
    scanf("%d", &a);
    printf("Enter number of rows: ");
    scanf("%d", &b);

    n = a*b;

    int arr[a][b];

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
        printf("coulmn[%d]row[%d]: ", i,j);
        scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}