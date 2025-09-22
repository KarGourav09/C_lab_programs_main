/*WAP to print all the even and odd numbers in an 1-D array.*/

#include <stdio.h>

int main()
{
    int N;
    printf("Enter the size of array(N)\n");
    scanf("%d", &N);

    int arr[N];

    for(int i = 0; i < N; i++)
    {
        printf("Enter the number r%d:", i);
        scanf("%d", &arr[i]);
    }
    printf("Even no:");
    for(int j = 0; j < N - 1; j++)
    {
        if(arr[j]%2 == 0)
        {
            printf(" %d",arr[j]);
        }
    }
    printf("\n");
    printf("Odd no:");
    for(int j = 0; j < N - 1; j++)
    {
        if(arr[j]%2 != 0)
        {
            printf(" %d",arr[j]);
        }
    }
    return 0;
}