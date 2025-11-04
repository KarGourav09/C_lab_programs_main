/*Write a C program to find the sum of only PRIME values in a 1-D array using a function PRIMESUM.*/

#include <stdio.h>
int sum_prime(int arr[], int n);
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
    printf("Sum of prime values in the array: %d\n", sum_prime(arr, n));
    return 0;
}
int sum_prime(int arr[], int n)
{
    if(n <= 0)
    {
        return 0;
    }
    int flag = 1;
    if (arr[n-1] <= 1) {
        flag = 0;
    } else {
        for (int i = 2; i * i <= arr[n-1]; i++) {
            if (arr[n-1] % i == 0) {
                flag = 0;
                break;
            }
        }
    }

    return (flag ? arr[n-1] : 0) + sum_prime(arr, n-1);
}