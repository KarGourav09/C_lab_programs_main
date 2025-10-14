/*WAP to find the second
largest element in an array.*/

#include <stdio.h>

int main()
{
    int N,temp = 0;
    printf("Enter the size of array(N)\n");
    scanf("%d", &N);

    int arr[N];

    for(int i = 0; i < N; i++)
    {
        printf("Enter the number r%d:", i);
        scanf("%d", &arr[i]);
    }

    int largest = arr[0],second_largest = arr[0];

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

    for(int i = 0;i < N; i++)
    {
        if(arr[i] == largest)
        {
            arr[i] = temp;
        }
    }

     for(int j = 0; j < N - 1; j++)
    {
        if(arr[j] > arr[j + 1])
        {
            second_largest = arr[j];
        }
        else if (arr[j] < arr[j + 1])
        {
            second_largest = arr[j + 1];
        }
        else
        {
            printf("Repeatative numbers are there, %d %d", arr[j],arr[j + 1]);
            return 1;
        }
    }
    printf("The Second Largest number in the Array is:%d\n",second_largest);
    return 0;
}