/*WAP to find Fahrenheit for a given centigrade temperature.*/

#include <stdio.h>

int main()
{
    float centigrade, fahrenheit;
    // Prompt user for input
    printf("Enter temperature in Centigrade: ");
    scanf("%f", &centigrade);
    // Convert Centigrade to Fahrenheit
    fahrenheit = (centigrade * 9.0 / 5.0) + 32.0;
    // Display the result
    printf("The Fahrenheit Temperature is: %.2f\n", fahrenheit);
    return 0;
}