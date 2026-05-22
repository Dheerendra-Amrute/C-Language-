/*6. Write a program using structure to read and display any 5 details of 2 students
without using array of structure*/

#include <stdio.h>

struct Student {
    char name[50];
    int age;
    int rollNumber;
    char address[100];
    float marks;
};

int main() {
    struct Student student1, student2;

    // Input details for student 1
    printf("Enter details for student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Age: ");
    scanf("%d", &student1.age);
    printf("Roll Number: ");
    scanf("%d", &student1.rollNumber);
    printf("Address: ");
    scanf("%s", student1.address);
    printf("Marks: ");
    scanf("%f", &student1.marks);

    // Input details for student 2
    printf("\nEnter details for student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Age: ");
    scanf("%d", &student2.age);
    printf("Roll Number: ");
    scanf("%d", &student2.rollNumber);
    printf("Address: ");
    scanf("%s", student2.address);
    printf("Marks: ");
    scanf("%f", &student2.marks);

    // Display details of student 1
    printf("\nDetails of student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Address: %s\n", student1.address);
    printf("Marks: %.2f\n", student1.marks);

    // Display details of student 2
    printf("\nDetails of student 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Roll Number: %d\n", student2.rollNumber);
    printf("Address: %s\n", student2.address);
    printf("Marks: %.2f\n", student2.marks);

    return 0;
}