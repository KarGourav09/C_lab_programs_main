/*WAP to search an element in an 1-D array.*/

#include <stdio.h>

int main()
{
    int N,findnum;
    printf("Enter the size of array(N)\n");
    scanf("%d", &N);

    int arr[N];

    for(int i = 0; i < N; i++)
    {
        printf("Enter the number%d:", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search:");
    scanf("%d", &findnum);

    for(int i = 0;i < N; i++)
    {
        if(arr[i] == findnum)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 0;
}