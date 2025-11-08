/*Q1.WAP in C
to define a structure “stud” having  data
member  roll number, name and mark then
read value for one student and display.
*/

#include <stdio.h>

struct stud {
    int roll;
    float mark;
    char name[20];
}student1;

int main() {
    printf("Enter the roll, name and marks for student1: ");
    scanf("%d", &student1.roll);
    scanf("%s", student1.name);
    scanf("%f", &student1.mark);
    printf("Roll Number: %d\n", student1.roll);
    printf("Name: %s\n", student1.name);
    printf("Mark: %.2f\n", student1.mark);
    return 0;
}