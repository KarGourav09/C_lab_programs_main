#include <stdio.h>
#include <math.h>

/*WAP to find the nature of roots of a quadratic equation ax^2 + bx + c = 0
  based on the values of a, b and c entered by the user.*/

int main()
{
    float a, b, c;
    printf("Enter the constants a, b and c:");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Infinite solutions exist.\n");
            }
            else
            {
                printf("No solution exists.\n");
            }
        }
        else
        {
            float root = -c / b;
            printf("One solution exists: x = %.2f\n", root);
        }
    }
    else
    {
        float discriminant = b * b - 4 * a * c;
        if (discriminant > 0)
        {
            float root1 = (-b + sqrt(discriminant)) / (2 * a);
            float root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Two distinct real solutions exist: x1 = %.2f, x2 = %.2f\n", root1, root2);
        }
        else if (discriminant == 0)
        {
            float root = -b / (2 * a);
            printf("One real solution exists: x = %.2f\n", root);
        }
        else
        {
            printf("No real solutions exist.\n");
        }
    }
    return 0;
}
