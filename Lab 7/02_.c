/*2. Write a program that dynamically allocates memory for an integer array of size 'n',
where 'n' is provided by the user and display it.*/

#include <stdio.h>
#include <stdlib.h> // For malloc and free

int main() {
    int n, i;
    int *arr;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the array
    printf("The array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}