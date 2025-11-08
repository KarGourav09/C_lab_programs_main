/*3.WAP to determine whether a year entered through the keyboard is a leap year or not.*/

#include <stdio.h>

int main() {
    int yr;
    printf("Enter the year: ");
    scanf("%d",&yr);
    if((yr%4 == 0 && yr%100 != 0) || yr%400 == 0){
        printf("The year is a leaf year");
    }
    else printf("The year is not a leaf year");
    return 0;
}