/*WAP to print Fibonacci series up to n terms.*/

#include <stdio.h>

int main() {
    int n, a = 0, b =1, temp;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        temp = a;
        a = b;
        b = temp + b;
        
    }
    return 0;
}
