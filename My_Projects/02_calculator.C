#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter an operator (+, -, *, /, ^): ");
    scanf(" %c", &op);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);

if (op == '+') {
    result = num1 + num2;
} else if (op == '-') {
    result = num1 - num2;
} else if (op == '*') {
    result = num1 * num2;
} else if (op == '/') {
    if (num2 != 0) {
        result = num1 / num2;
    } else {
        printf("Error: Division by zero.\n");
        return 1;
    }
} else if (op == '^') {
    result = pow(num1, num2);
} else {
    printf("Error: Invalid operator.\n");
    return 1;
}

    printf("Result: %.2lf\n", result);
    return 0;
}