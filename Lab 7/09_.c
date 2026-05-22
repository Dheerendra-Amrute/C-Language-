/*9. Write a program to read and display information of 5 employees using array and
structure.*/

#include <stdio.h>

// Define the structure for Employee
struct Employee {
    char name[50];
    int age;
    int id;
    char address[100];
    float salary;
};

int main() {
    struct Employee employees[5]; // Array of 5 Employee structures
    int i;

    // Input details for each employee
    for (i = 0; i < 5; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Address: ");
        scanf("%s", employees[i].address);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Display details of all employees
    printf("\nDetails of all employees:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("ID: %d\n", employees[i].id);
        printf("Address: %s\n", employees[i].address);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}