/*WAP to find out the multiplication of the
numbers stored in an array of integers.*/


#include <stdio.h>

int main()
{
    int N,multi = 1;
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
        multi = multi * arr[j];
    }
    printf("Multiple of the number stored in Array is:%d",multi);
    return 0;
}