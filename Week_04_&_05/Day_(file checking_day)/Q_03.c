#include <stdio.h>

int main()
{
    int num;
    float sum = 0.0;

    printf("Enter num:");
    scanf("%d", &num);

    for(float i = 1.0; i <= num; i++)
    {
        sum = sum + 1/i;
    }
    printf("total sum:%f", sum);
    return 0;
}