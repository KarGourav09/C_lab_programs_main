/*WAP to take input and display array elements using pointers using user defined function*/

#include <stdio.h>
void inputdata(int*, int);
void showdata(int*,int);
int main() {
    int arr[5],n;
    inputdata(arr,n);
    showdata(arr,n);
    return 0;
}

























void inputdata(int* arr, int n) {
    printf("Enter 5 values\n");
    for(int i= 0; i<5; i++)
    scanf("%d",arr + i);
}
void showdata(int* arr, int n) {
    printf("the Entered values are\n");
    for(int i= 0; i<5; i++)
    printf("%d\n",*(arr + i));
}