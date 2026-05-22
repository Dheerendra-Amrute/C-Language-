/*6. Define two structures: date to store a date (day, month, year) and employee to store 
information about an employee (name, ID, date of joining). Write a program to create
a structure variable of type employee and initialize its members, including the date of
joining.*/

#include <stdio.h>

// Define the Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Define the Employee structure
struct Employee {
    char name[100];
    int employeeID;
    struct Date joiningDate; // Nested structure for date of joining
};

int main() {
    struct Employee emp1;

    // Initialize employee details
    printf("Enter employee details:\n");
    printf("Name: ");
    scanf("%s", emp1.name);

    printf("Employee ID: ");
    scanf("%d", &emp1.employeeID);

    printf("Date of Joining (dd mm yyyy): ");
    scanf("%d %d %d", &emp1.joiningDate.day, &emp1.joiningDate.month, &emp1.joiningDate.year);

    // Display employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp1.name);
    printf("Employee ID: %d\n", emp1.employeeID);
    printf("Date of Joining: %02d/%02d/%04d\n", emp1.joiningDate.day, emp1.joiningDate.month, emp1.joiningDate.year);

    return 0;
}