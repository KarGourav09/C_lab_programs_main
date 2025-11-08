/*Q2. WAP in
C to define a structure “EMP” having 
data member  ID number, name and
designation then read value for 5 employees and display.*/

#include <stdio.h>
struct EMP {
    int ID_number;
    char name[100];
    char desig[100];
};
int main() {
    struct EMP emp[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter details for employee %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &emp[i].ID_number);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Designation: ");
        scanf("%s", emp[i].desig);
    }
    printf("\nEmployee Details:\n");
    for(int i = 0; i < 5; i++) {
        printf("Employee %d: ID=%d, Name=%s, Designation=%s\n", 
               i+1, emp[i].ID_number, emp[i].name, emp[i].desig);
    }
    return 0;
}