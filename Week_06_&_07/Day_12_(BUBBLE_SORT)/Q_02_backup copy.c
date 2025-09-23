/* WAP to Count the total number of duplicate
elements in an array.
*/
#include <stdio.h>

int main()
{
    int N,temp,count = 0;
    printf("Enter the size of array(N)\n");
    scanf("%d", &N);

    int arr[N];

    for(int i = 0; i < N; i++)
    {
        printf("Enter the number%d:", i);
        scanf("%d", &arr[i]);
    }
    printf("Array contents are: ");
    for(int i = 0; i < N -1; i++)
    {
        for(int j = 0; j < N - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < N; i++)
    {
        if(arr[i] == arr[i + 1])
        {
            count++;
        }
    }
    return 0;
}