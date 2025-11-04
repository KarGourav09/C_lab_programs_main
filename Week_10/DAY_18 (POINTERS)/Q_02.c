/*2.WAP to sort the elements
of an 1-D array in ascending order by using a suitable user defined function
for sort operation.*/

#include <stdio.h>
void inputdata(int*, int);
void sortdata(int*, int);
void showdata(int*, int);
int main() {
    int arr[5],n = 5;
    inputdata(arr,n);   
    sortdata(arr,n);
    showdata(arr,n);
    return 0;
}





















void inputdata(int* arr, int n) {
    printf("Enter 5 values\n");
    for(int i= 0; i<n; i++)
        scanf("%d",arr + i);
}
void sortdata(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
void showdata(int* arr, int n) {
    printf("The sorted array is:\n");
    for(int i= 0; i<n; i++)
    printf("%d ", *(arr + i));
    printf("\n");
}

