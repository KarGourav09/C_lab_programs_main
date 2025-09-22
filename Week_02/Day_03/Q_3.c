/*WAP to calculate area of a circle while taking radius as user input*/

#include <stdio.h>

int main()
{
    float radius, area;
    const float PI = 3.1415;
    // Prompt user for input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    // Calculate the area of the circle
    area = PI * radius * radius;
    // Display the result
    printf("The area is: %.2f\n", area);
    return 0;
}