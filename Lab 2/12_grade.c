/*Write a program to read marks of student and display the equivalent grade.
(using switch statement)
Marks >= 90, A
80 <= Marks < 90, B
70 <= Marks < 80, C
60 <= Marks < 70, D

50 <= Marks < 40, E
Marks <= 40, F*/
#include <stdio.h>

int main() {
    int marks;

    printf("Enter the marks of the student: ");
    scanf("%d", &marks);

    switch (marks / 10) {
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        case 5:
            printf("Grade: E\n");
            break;
        default:
            printf("Grade: F\n");
            break;
    }

    return 0;
}