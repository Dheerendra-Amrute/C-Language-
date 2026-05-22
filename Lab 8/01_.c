/*1. Write a program to store the details of 5 students. Use nested structure for storing the
address. Print all the details of the students whose roll number the user enters.*/

#include <stdio.h>

// Define the Address structure
struct Address {
    char street[100];
    char city[50];
    char state[50];
    int pincode;
};

// Define the Student structure
struct Student {
    int rollno;
    char name[100];
    struct Address studentAdd; // Nested structure for address
};

int main() {
    struct Student students[5];

    // Input details for each student
    for (int i = 0; i < 5; ++i) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollno);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Address:\n");
        printf("Street: ");
        scanf("%s", students[i].studentAdd.street);
        printf("City: ");
        scanf("%s", students[i].studentAdd.city);
        printf("State: ");
        scanf("%s", students[i].studentAdd.state);
        printf("Pincode: ");
        scanf("%d", &students[i].studentAdd.pincode);
    }

    // Prompt user for roll number
    int searchRoll;
    printf("Enter the roll number to search: ");
    scanf("%d", &searchRoll);

    // Search for the student with the given roll number
    for (int i = 0; i < 5; ++i) {
        if (students[i].rollno == searchRoll) {
            printf("\nStudent Details:\n");
            printf("Roll Number: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Address:\n");
            printf("Street: %s\n", students[i].studentAdd.street);
            printf("City: %s\n", students[i].studentAdd.city);
            printf("State: %s\n", students[i].studentAdd.state);
            printf("Pincode: %d\n", students[i].studentAdd.pincode);
            return 0; // Exit after displaying details
        }
    }

    printf("Student with roll number %d not found.\n", searchRoll);
    return 0;
}
























// #include <stdio.h>

// struct address{
//     int flat_no;
//     char city[15];
//     char state[20];
// };

// struct Student {
//     struct address a[5];
//     char name[50];
//     int age;
//     int rollno;
// };

// int main() {
//     int n;
//     printf("enter the no. of data you want to enter");
//     scanf("%d",&n);
//     struct Student student[n];
//     int i;
    
//     for (i = 0; i < 5; i++) {
//     printf("Enter details for student %d:\n",i+1);
//     printf("Name:");
//     scanf("%s", student[i].name);
//     printf("Age: ");
//     scanf("%d", &student[i].age);
//     printf("Roll Number: ");
//     scanf("%d", &student[i].rollno);
//     printf("Address: \n");
//     printf("flat no:");
//     scanf("%s",student[i].a[i].flat_no);
//     printf("city:");
//     scanf("%s",student[i].a[i].city);
//     printf("state:");
//     scanf("%s",student[i].a[i].state);
//     }

//     int j;
//     for (j = 0; j < 5; j++) {
//     printf("\nDetails of student %d:\n",j+1);
//     printf("Name: %s\n", student[j].name);
//     printf("Age: %d\n", student[j].age);
//     printf("Roll Number: %d\n", student[j].rollno);
//     printf("Address: %d, %s, %s, %s \n", student[j].a[j].flat_no,student[j].a[j].city,student[j].a[j].state);
//     }

//     return 0;
// }