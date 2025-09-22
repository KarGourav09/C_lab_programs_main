/*WAP
to find out factors of a number.*/

#include <stdio.h>

int main() {
    int num, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    while (i <= num) {
        if (num % i == 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
    return 0;
}
