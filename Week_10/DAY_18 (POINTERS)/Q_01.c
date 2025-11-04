/*1.      
WAP to design a user defined function to calculate the sum of the
elements of an integer 1-D array.*/

#include <stdio.h>
void inputdata(int*, int);
int sumdata(int*,int);
int main() {
    int arr[5],n = 5;
    inputdata(arr,n);
    printf("the sum of the values are: %d\n",sumdata(arr,n));
    return 0;
}























void inputdata(int* arr, int n) {
    printf("Enter 5 values\n");
    for(int i= 0; i<n; i++)
    scanf("%d",arr + i);
}
int sumdata(int* arr, int n) {
    if(arr == NULL)
    return 0;
    for(int i= 0; i<n; i++)
    return  *(arr + i) + sumdata(arr + 1, n - 1);
}