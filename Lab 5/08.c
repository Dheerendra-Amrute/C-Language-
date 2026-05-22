#include <stdio.h>

// Function to check if an element is unique in the array
int isUnique(int arr[], int n, int index) {
    for (int i = 0; i < n; i++) {
        if (i != index && arr[i] == arr[index]) {
            return 0; // Not unique
        }
    }
    return 1; // Unique
}

// Function to print unique elements in the array
void printUniqueElements(int arr[], int n) {
    printf("Unique elements in the array: ");
    for (int i = 0; i < n; i++) {
        if (isUnique(arr, n, i)) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 1, 2, 6, 7, 8, 9, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printUniqueElements(arr, n);

    return 0;
}
