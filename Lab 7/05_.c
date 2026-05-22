/*5. Write a program which declare a structure employee having its details (name, age, id,
address, salary). Take these values from the users and print the details.*/

#include <stdio.h>

struct Employee
{
    char name[20];
    int age;
    int id;
    char address[100];
    float salary;
};

int main()
{
    struct Employee emp;

    printf("Enter name: \n");
    gets(emp.name);

    printf("Enter address:");
    gets(emp.address);

    printf("Enter age: \n");
    scanf("%d", &emp.age);

    printf("Enter ID: \n");
    scanf("%d", &emp.id);

    printf("Enter salary: \n");
    scanf("%f", &emp.salary);

    printf("\nEmployee Details:\n");
    printf("Name:");
    puts(emp.name);
    printf("Age: %d\n", emp.age);
    printf("ID: %d\n", emp.id);
    printf("Address:");
    puts(emp.address);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}