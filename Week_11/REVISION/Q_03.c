/*3. Write a C program to determine the largest and smallest element of a 1-D array using
pointer.*/

#include <stdio.h>
void inputdata(int*, int);
int Largest(int*,int);
int Smallest(int*,int);
int main() {
    int arr[5], n = 5;
    int* ptr = arr;
    inputdata(arr, n);
    printf("Largest element: %d\n", Largest(arr, n));
    printf("Smallest element: %d\n", Smallest(arr, n));
    return 0;
}





















void inputdata(int* arr, int n) {
    printf("Enter 5 values\n");
    for(int i = 0; i < n; i++)
        scanf("%d", arr + i);
}
int Largest(int* arr, int n) {
    if(n == 1)
        return *arr;
    int maxRest = Largest(arr + 1, n - 1);
    return (*arr > maxRest) ? *arr : maxRest;
}
int Smallest(int* arr, int n) {
    if(n == 1)
        return *arr;
    int minRest = Smallest(arr + 1, n - 1);
    return (*arr < minRest) ? *arr : minRest;
}