/*WAP to find the average mark of 5 subjects of a student and find the percentage. Assume full mark of each subject is 200.
 All the input must be given by user.*/

#include <stdio.h>

int main() {
    float mark1, mark2, mark3, mark4, mark5, total = 0.0, average, percentage;
    const float full_marks = 200.0;
    // Prompt user for input
   printf("Enter the marks for 1st Subject:");
    scanf("%f", &mark1);
    printf("Enter the marks for 2nd Subject:");
    scanf("%f", &mark2);
    printf("Enter the marks for 3rd Subject:");
    scanf("%f", &mark3);
    printf("Enter the marks for 4th Subject:");
    scanf("%f", &mark4);
    printf("Enter the marks for 5th Subject:");
    scanf("%f", &mark5);
    // Calculate average and percentage
    total = mark1 + mark2 + mark3 + mark4 + mark5;
    average = total / 5.0;
    percentage = (total / (5 * full_marks)) * 100.0;
    printf("The Average is: %f", average);
    printf("\n");
    printf("The Percentage is: %f", percentage);
    return 0;
}