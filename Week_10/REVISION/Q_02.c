/*2.WAP to find the sum of 1st and last of a six-digit number. Number must be a user input.*/

#include <stdio.h>
#include <math.h>

int main() {
    int n,sum;
    printf("Enter the six digit number: ");
    scanf("%d",&n);
    sum = n%10 + n/(int)pow(10,5);
    printf("Sum: %d",sum);
    return 0;
}