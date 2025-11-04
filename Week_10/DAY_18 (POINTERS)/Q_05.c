/*5.Write a C program to add
5 to each  element of a 1-D array of
using a user defined function*/

#include <stdio.h>
void inputdata(int*, int);
void addfive(int*,int);
void showdata(int*,int);
int main() {
    int arr[5],n=5;
    inputdata(arr,n);
    addfive(arr,n);
    showdata(arr,n);
    return 0;
}






















void inputdata(int* arr, int n) {
    printf("Enter %d values\n", n);
    for(int i= 0; i<n; i++)
    scanf("%d",arr + i);
}
void addfive(int* arr, int n) {
    for(int i= 0; i<n; i++)
    *(arr + i) += 5;
}
void showdata(int* arr, int n) {
    printf("the Entered values are\n");
    for(int i= 0; i<n; i++)
    printf("%d\n",*(arr + i));
}