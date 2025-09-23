/*WAP to interchange the
value of 1st and last element of the array and display all  elements of an array.*/

#include <stdio.h>

int main()
{
    int N,temp;
    printf("Enter the size of array(N)\n");
    scanf("%d", &N);

    int arr[N];

    for(int i = 0; i < N; i++)
    {
        printf("Enter the number r%d:", i);
        scanf("%d", &arr[i]);
    }

    temp = arr[0];
    arr[0] = arr[N-1];
    arr[N-1] = temp;

    printf("The array after interchanging first and last element is:\n");
    for(int j = 0; j < N; j++)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}