/*
 * Program to swap the first and last element of a 1-D array using pointers
 * Uses three functions: inputdata(), swapdata(), and showdata()
 */
#include <stdio.h>
void inputdata(int*, int);
void swapdata(int*, int);
void showdata(int*, int);
int main() {
    int arr[5],n = 5;  // Size of the array
    inputdata(arr, n);
    swapdata(arr, n);
    showdata(arr, n);
    return 0;
}





















void inputdata(int* arr, int n) {
    printf("Enter %d values:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", arr + i);
    }
}

void swapdata(int* arr, int n) {
    int temp = *arr;           // Store first element
    *arr = *(arr + n - 1);    // Put last element in first position
    *(arr + n - 1) = temp;    // Put first element in last position
}

void showdata(int* arr, int n) {
    printf("\nArray after swapping first and last elements:\n");
    for(int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i+1, *(arr + i));
    }
}

