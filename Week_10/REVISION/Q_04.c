/*4. WAP to find the roots of a quadratic equation ax2+bx+c=0 using switch-case statement.*/

#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c,D;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    D = b*b - 4*a*c;
    switch(D > 0 ? 1 : (D < 0 ? -1 : 0)){
    case 1: printf("Roots are real and distinct\n");
            printf("Root1 = %.2f\n", (-b + sqrt(D))/(2*a));
            printf("Root2 = %.2f\n", (-b - sqrt(D))/(2*a));
            break;
    case -1: printf("Roots are imaginary\n");
            break;
    case 0: printf("Roots are real and equal\n");
            printf("Root = %.2f\n", -b/(2*a));
            break;
}
    return 0;
}