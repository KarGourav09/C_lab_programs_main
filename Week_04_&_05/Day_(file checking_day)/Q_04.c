#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float sum = 0.0;
    printf("Enter the number:");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        sum = sum + (float)pow(i,2)/(float)pow(i,3);
    }
    printf("The Sum is %.2f", sum);
    return 0;
}