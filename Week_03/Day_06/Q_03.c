/* 
    WAP to display the grade system of KIIT University based on total marks secured by a student in a 
    semester. Assume marks are integer values. Use multiple if-else statement. 
    The grade is calculated as follows: 
    Marks      Grade 
    90-100     O 
    80-89      E 
    70-79      A 
    60-69      B 
    50-59      C 
    40-49      D 
    <40        F
*/

#include <stdio.h>

int main() {
    int mark;

    printf("Enter the Marks: ");
    scanf("%d", &mark);

    if (mark >= 90 && mark <= 100) {
        printf("Grade secured is O\n");
    } else if (mark >= 80 && mark <= 89) {
        printf("Grade secured is E\n");
    } else if (mark >= 70 && mark <= 79) {
        printf("Grade secured is A\n");
    } else if (mark >= 60 && mark <= 69) {
        printf("Grade secured is B\n");
    } else if (mark >= 50 && mark <= 59) {
        printf("Grade secured is C\n");
    } else if (mark >= 40 && mark <= 49) {
        printf("Grade secured is D\n");
    } else if (mark < 40 && mark >= 0) {
        printf("Grade secured is F\n");
    } else {
        printf("Invalid marks entered.\n");
    }

    return 0;
}