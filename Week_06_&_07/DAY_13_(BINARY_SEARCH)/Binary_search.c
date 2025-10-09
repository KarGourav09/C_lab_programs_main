#include <stdio.h>

int main() {
    int N,temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);
    int arr[N];

    for(int i = 0; i < N; i++)
    {
        printf("Enter the number%d:", i);
        scanf("%d", &arr[i]);
    }
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

    int key;
    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    int low = 0, high = N - 1, mid;
    /* standard binary search: recompute mid each iteration */
    int found = 0;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            printf("Element found %d\n", mid);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Element not found in the array\n");
    }
    
    return 0;
}