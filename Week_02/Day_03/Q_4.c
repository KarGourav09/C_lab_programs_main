/*WAP to calculate area of a triangle who’s base and height are user input.*/

#include <stdio.h>

int main()
{
    float base, height, area;
    // Prompt user for input
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    // Calculate the area of the triangle
    area = 0.5 * base * height;
    // Display the result
    printf("The area of the triangle is: %.2f\n", area);
    return 0;
}