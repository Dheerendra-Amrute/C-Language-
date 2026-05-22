/*4. Write a program that dynamically allocates memory for an integer array. Allow the
user to keep adding elements to the array dynamically. When the array is filled,
dynamically resize it to accommodate more elements.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = NULL;
    int size = 0;
    int capacity = 0;
    char choice;

    do {
        if (size == capacity) {
            // Resize the array
            capacity = (capacity == 0) ? 1 : capacity * 2;
            int *temp = realloc(array, capacity * sizeof(int));
            if (temp == NULL) {
                printf("Memory allocation failed. Exiting...\n");
                if (array != NULL) free(array);
                return 1;
            }
            array = temp;
        }

        printf("Enter an integer to add to the array (or 'q' to quit): ");
        if (scanf("%d", &array[size]) == 1) {
            size++;
        } else {
            scanf("%c", &choice); // Consume the invalid input
            if (choice == 'q' || choice == 'Q') {
                break;
            } else {
                printf("Invalid input. Please enter an integer.\n");
            }
        }
    } while (1);

    printf("\nArray elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");

    // Free dynamically allocated memory
    if (array != NULL) {
        free(array);
    }

    return 0;
}