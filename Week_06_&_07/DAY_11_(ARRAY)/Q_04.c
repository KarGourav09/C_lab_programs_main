/*WAP to find largest and smallest element stored in an array.*/

#include <stdio.h>

int main()
{
    int N,largest = 0,smallest;
    printf("Enter the size of array(N)\n");
    scanf("%d", &N);

    int arr[N];

    for(int i = 0; i < N; i++)
    {
        printf("Enter the number r%d:", i);
        scanf("%d", &arr[i]);
    }
    for(int j = 0; j < N - 1; j++)
    {
        if(arr[j] > arr[j + 1])
        {
            largest = arr[j];
        }
        else if (arr[j] < arr[j + 1])
        {
            largest = arr[j + 1];
        }
        else
        {
            printf("Repeatative numbers are there, %d %d", arr[j],arr[j + 1]);
        }
    }

     for(int k = 0; k < N - 1; k++)
    {
        if(arr[k] < arr[k + 1])
        {
            smallest = arr[k];
        }
        else if (arr[k] > arr[k + 1])
        {
            smallest = arr[k + 1];
        }
        else
        {
            printf("Repeatative numbers are there, %d %d", arr[k],arr[k + 1]);
        }
    }

    printf("The Largest number in the Array is:%d\n",largest);
    printf("The Smallest number in the Array is:%d\n",smallest);
    return 0;
}