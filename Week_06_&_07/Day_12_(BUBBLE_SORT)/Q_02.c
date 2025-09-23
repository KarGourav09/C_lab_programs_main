/* WAP to Count the total number of duplicate
elements in an array.
*/

#include <stdio.h>

int main()
{
    int N,temp,count = 0;
    printf("Enter the size of array(N)\n");
    scanf("%d", &N);

    int arr[N], dup[count];

    for(int i = 0; i < N; i++)
    {
        printf("Enter the number%d:", i);
        scanf("%d", &arr[i]);
    }
        for(int k = 0; k < N; k++)
        {
            for(int j = k + 1; j < N; j++)
        {
            if(arr[k] == arr[j])
            {
                count++;
                dup[k] = arr[k];
            }
        }
        }
    printf("%d number of duplicates are there", count);
    return 0;
}