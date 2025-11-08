/*8. WAP to Count the total number of duplicate elements in a 1D array using recursion*/

#include <stdio.h>

int main() {
    int n,dup = 0;
    printf("Enter the total number of element: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the elements of array: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                dup++;
                break; // To avoid counting the same duplicate multiple times
            }
        }
    }
    printf("Total duplicate elements: %d\n", dup);
    return 0;
}