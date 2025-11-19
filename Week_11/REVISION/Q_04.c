/*4. Write a C program to add 2 to each element of a 1-D array of using pointer .*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int *p = arr;
    for(int i = 0; i < n; i++)
    {
        printf("%d ",*(p + i) + 2);
    }
    return 0;
}