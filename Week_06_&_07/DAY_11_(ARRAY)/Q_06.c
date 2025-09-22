/*WAP to reverse the array elements. */

#include <stdio.h>

int main()
{
    int N,sum = 0;
    printf("Enter the size of array(N)\n");
    scanf("%d", &N);

    int arr[N];

    for(int i = 0; i < N; i++)
    {
        printf("Enter the number r%d:", i);
        scanf("%d", &arr[i]);
    }
    printf("Reverse of the contents of array are: ");
    for(int j = 1; j <= N; j++)
    {
        printf("%d ",arr[N - j]);
    }
    return 0;
}