/*WAP to find the roots of a quadratic equation ax2+bx+c=0 using if-else statement.*/

#include <stdio.h>
#include <math.h>
int main ()
{	float x,x1,x2,real_part,imaginary_part,discriminant;
	int a,b,c;
	
	printf("Enter the value of Constants a b c\n");
	scanf("%d\n", &a);
	scanf("%d\n", &b);
	scanf("%d\n", &c);
	
	discriminant = (b*b) - 4*a*c;
	
	if(discriminant > 0)
	{	x1 = (- b + sqrt(discriminant)) / (2*a);
		x2 = (- b - sqrt(discriminant)) / (2*a);		
		printf("The values of x will be real and distinct x1 = %f , x2 = %f", x1,x2);
	}
	else if(discriminant < 0)
	{	real_part = -b/(2*a);
		imaginary_part = sqrt(discriminant)/(2*a);
		
		printf("The value of x is divided into real part %f and imaginary part %f", real_part, imaginary_part);
	}
	else if(discriminant = 0)
	{	x = -b/(2*a);
		printf("The value of x is %f", x);
	}
	
	return 0;
}