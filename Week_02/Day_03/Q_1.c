/*WAP to perform the addition of two integers and display the result.
 Input must be given by user.*/

 #include <stdio.h>

 int main() {
     int num1, num2, sum;
        // Prompt user for input
        printf("Enter first integer: ");
        scanf("%d", &num1);
        printf("Enter second integer: ");
        scanf("%d", &num2);
        // Calculate the sum
        sum = num1 + num2;
        // Display the result
        printf("The sum is: %d\n",sum);
        return 0;
 }