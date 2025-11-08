/*6. WAP to find out sum of series up to n terms
1+2 2 +3 3 +……….+n n*/

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum = sum + (int)pow(i, i);
    }
    printf("Sum of the series is: %d\n", sum);
    return 0;
}