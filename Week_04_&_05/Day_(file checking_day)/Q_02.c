#include <stdio.h>

int main()
{
    int num,sum = 0;

    printf("Enter num:");
    scanf("%d", &num);

    for(int i = 0; i <= num; i++)
    {
        sum = sum + (i*i);
    }
    printf("total sum:%d", sum);
    return 0;
}