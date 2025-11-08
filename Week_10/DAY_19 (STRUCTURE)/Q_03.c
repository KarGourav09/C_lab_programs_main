/*Q3. WAP in
C to define a structure “EMP” having data member ID number, name and
designation then read value for one 
employees and display using pointer.(USE THE MEMBERSHIP AND ARROW
OPERATOR).*/

#include <stdio.h>
struct EMP {
        int ID_number;
        char name[100];
        char designation[100];
    };
int main() {
    struct EMP employee1;
    struct EMP *ptr = &employee1;
    printf("Enter the ID number, name and designation for employee1: ");
    scanf("%d", &ptr->ID_number);
    scanf("%s", ptr->name);
    scanf("%s", ptr->designation);
    printf("ID Number: %d\n", ptr->ID_number);
    printf("Name: %s\n", employee1.name);
    printf("Designation: %s\n", employee1.designation);
    return 0;
}