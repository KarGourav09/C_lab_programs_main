/*WAP to find the average of N numbers using arrays.*/

#include <stdio.h>

int main()
{
    int N,sum = 0;
    float average;
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
    average = (float)sum/N;
    printf("Average of the number stored in Array is:%.2f",average);
    return 0;
}