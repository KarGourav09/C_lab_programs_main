/*WAP to take input and display array elements using pointers*/

#include <stdio.h>
int main() {
    int arr[5],n;
    printf("Enter 5 values\n");
    for(int i= 0; i<5; i++)
    scanf("%d",arr + i);
    printf("the Entered values are\n");
    for(int i= 0; i<5; i++)
    printf("%d\n",*(arr + i));
    return 0;
}