/*4. WAP to count the number of digits  of a integer number using recursion.*/

#include <stdio.h>
int countOfdigit(int n);
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("The count of digits of %d is %d\n", n, countOfdigit(n));
    return 0;
}
int countOfdigit(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + countOfdigit(n / 10);
}