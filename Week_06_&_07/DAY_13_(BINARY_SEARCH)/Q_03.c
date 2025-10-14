/*WAP to find the sum of
elements of a matrix in its upper triangle.*/

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

    int sum = 0;

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            if(j <= i)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    printf("Sum of the upper triangle of matrix is:%d",sum);

    return 0;
}