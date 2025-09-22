/*WAP
to take 10 different numbers as input. Print their sum and average*/

#include <stdio.h>

int main() {
    int i = 1,num,sum = 0,average;

    while(i <= 10)
    {
        printf("Enter the number:");
        scanf("%d",&num);
         sum = sum + num;
         average = sum / 10;   
        i++;
    }
    printf("Sum: %d\n", sum);
    printf("Average: %d", average);
    return 0;
}