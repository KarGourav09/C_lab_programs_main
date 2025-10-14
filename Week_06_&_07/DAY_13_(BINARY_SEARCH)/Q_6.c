/*WAP to display the diagonal
 elements of a matrix of size 3x3.
*/

#include <stdio.h>

int main() {
    int a,b,n;
    printf("Enter number of rows: ");
    scanf("%d", &a);
    printf("Enter number of coulmns: ");
    scanf("%d", &b);

    n = a*b;

    int arr[a][b];

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
        printf("Rows[%d] Coulmns[%d]: ", i,j);
        scanf("%d", &arr[i][j]);
        }
    }

    printf("2D Array diagonal contents are: \n");
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            if(i == j)
            {
            printf(" %d\n",arr[i][j]);
            }
        }
        printf("\n");
    }


    return 0;
}