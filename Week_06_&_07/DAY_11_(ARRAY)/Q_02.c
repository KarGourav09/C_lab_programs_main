/*WAP to find out the sum of the N numbers stored in an array of integers.*/

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
    for(int j = 0; j < N; j++)
    {
        sum = sum + arr[j];
    }
    printf("Sum of the number stored in Array is:%d",sum);
    return 0;
}