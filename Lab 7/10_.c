/*10. Write a program to read the details of all students in the class. Then edit the details
of ith student and redisplay it*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    char name[50];
    int age;
    int rollNumber;
    char address[100];
    float marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents, i;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Input details for each student
    for (i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Address: ");
        scanf("%s", students[i].address);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display details of all students
    printf("\nDetails of all students:\n");
    for (i = 0; i < numStudents; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Address: %s\n", students[i].address);
        printf("Marks: %.2f\n", students[i].marks);
    }

    // Edit details of the i-th student
    int editIndex;
    printf("\nEnter the index of the student to edit (0-%d): ", numStudents - 1);
    scanf("%d", &editIndex);

    if (editIndex >= 0 && editIndex < numStudents) {
        printf("\nEnter new details for student %d:\n", editIndex + 1);
        printf("Name: ");
        scanf("%s", students[editIndex].name);
        printf("Age: ");
        scanf("%d", &students[editIndex].age);
        printf("Roll Number: ");
        scanf("%d", &students[editIndex].rollNumber);
        printf("Address: ");
        scanf("%s", students[editIndex].address);
        printf("Marks: ");
        scanf("%f", &students[editIndex].marks);

        // Display the edited details
        printf("\nEdited details of student %d:\n", editIndex + 1);
        printf("Name: %s\n", students[editIndex].name);
        printf("Age: %d\n", students[editIndex].age);
        printf("Roll Number: %d\n", students[editIndex].rollNumber);
        printf("Address: %s\n", students[editIndex].address);
        printf("Marks: %.2f\n", students[editIndex].marks);
    } else {
        printf("Invalid index. No student edited.\n");
    }

    return 0;
}
