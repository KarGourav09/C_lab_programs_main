#include <stdio.h>

int main() {
    int i = 1,num;
    printf("Enter the value of n:");
    scanf("%d", &num);

    while(i <= num)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}