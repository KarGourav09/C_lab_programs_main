/* WAP to Count the total number of duplicate
elements in an array.
*/

#include <stdio.h>

int main()
{
    int N, count = 0;
    printf("Enter the size of array(N): ");
    scanf("%d", &N);

    int arr[N], freq[N];

    // Input array elements
    for(int i = 0; i < N; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array
    }

    // Count frequency of each element
    for(int i = 0; i < N; i++)
    {
        int c = 1;
        for(int j = i + 1; j < N; j++)
        {
            if(arr[i] == arr[j])
            {
                c++;
                freq[j] = 0; // Mark as counted
            }
        }
        if(freq[i] != 0)
            freq[i] = c;
    }

    // Count how many elements are duplicates
    for(int i = 0; i < N; i++)
    {
        if(freq[i] > 1)
            count++;
    }

    printf("Total number of duplicate elements: %d\n", count);
    return 0;
}