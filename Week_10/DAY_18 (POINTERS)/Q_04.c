/*4.Write a C program to
determine the largest and smallest element of a 1-D array. Use functions
LARGEST and SMALLEST for the given purpose.*/

#include <stdio.h>
void inputdata(int*, int);
void LARGEST(int*, int);
void SMALLEST(int*, int);
int main() {
    int arr[5],n = 5;  // Size of the array
    inputdata(arr, n);
    LARGEST(arr, n);
    SMALLEST(arr, n);
    return 0;
}





















void inputdata(int* arr, int n) {
    printf("Enter %d values:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", arr + i);
    }
}
void LARGEST(int* arr, int n) {
    if (n <= 0) {
        printf("\nArray is empty.\n");
        return;
    }
    int *p = arr;                /* pointer to current element */
    int largest = *p;            /* initialize with first element */
    for (p = arr + 1; p < arr + n; ++p) {
        if (*p > largest) largest = *p;
    }
    printf("\nLargest element: %d\n", largest);
}
void SMALLEST(int* arr, int n) {
    if (n <= 0) {
        printf("\nArray is empty.\n");
        return;
    }
    int *p = arr;
    int smallest = *p;
    for (p = arr + 1; p < arr + n; ++p) {
        if (*p < smallest) smallest = *p;
    }
    printf("Smallest element: %d\n", smallest);
}

