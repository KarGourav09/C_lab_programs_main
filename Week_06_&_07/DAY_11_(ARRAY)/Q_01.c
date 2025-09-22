/*WAP to create an array that can store N integers and display the contents of the array*/

#include <stdio.h>

int main()
{
    int N;
    printf("Enter the size of array(N)\n");
    scanf("%d", &N);

    int arr[N];

    for(int i = 0; i < N; i++)
    {
        printf("Enter the number%d:", i);
        scanf("%d", &arr[i]);
    }
    printf("Array contents are: ");
    for(int j = 0; j < N; j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}