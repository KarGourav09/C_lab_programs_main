#include <stdio.h>

int main() {
    int i,num;
    printf("Enter the value of n:");
    scanf("%d", &num);

    i = num;

    while(i > 0)
    {
        printf("%d\n", i);
        i--;
    }
    return 0;
}