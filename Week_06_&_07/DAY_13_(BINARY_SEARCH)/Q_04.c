/* WAP to display the
upper and lower triangle elements of a matrix of size 3x3*/

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
    printf("THe elements in the upper triangle are: \n");

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            if(j <= i)
            {
                 printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
    printf("The elements in the lower triangle are: \n");

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            if(j >= i)
            {
                 printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}