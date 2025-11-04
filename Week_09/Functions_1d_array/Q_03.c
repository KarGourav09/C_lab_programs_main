/*Write a C program to determine the largest and smallest element of a 1-D array. Use functions LARGEST and SMALLEST for the given purpose.*/

#include <stdio.h>
void largest_and_smallest(int arr[], int n);
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largest_and_smallest(arr, n);
    return 0;
}

void largest_and_smallest(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The largest number in the array is %d and smallest number in the array is %d", arr[n-1],arr[0]);
}