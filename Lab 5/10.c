/*10. Write a program in C  to 
a) Insert a value in already existing array
b) Delete
c) Display Array
d) Print Array sum
using function. The program should be choice based.*/

#include <stdio.h>

#define MAX_SIZE 100

void displayArray(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertValue(int arr[], int *size, int index, int value) {
    if (*size >= MAX_SIZE) {
        printf("Array is full. Cannot insert.\n");
        return;
    }

    for (int i = *size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    arr[index] = value;
    (*size)++;
}

void deleteValue(int arr[], int *size, int index) {
    if (index < 0 || index >= *size) {
        printf("Invalid index. Cannot delete.\n");
        return;
    }

    for (int i = index; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--;
}

int arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, value, index;

    do {
        printf("\nMenu:\n");
        printf("1. Insert a value\n");
        printf("2. Delete a value\n");
        printf("3. Display Array\n");
        printf("4. Print Array sum\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the index and value to insert: ");
                scanf("%d %d", &index, &value);
                insertValue(arr, &size, index, value);
                break;
            case 2:
                printf("Enter the index to delete: ");
                scanf("%d", &index);
                deleteValue(arr, &size, index);
                break;
            case 3:
                displayArray(arr, size);
                break;
            case 4:
                printf("Array sum: %d\n", arraySum(arr, size));
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}