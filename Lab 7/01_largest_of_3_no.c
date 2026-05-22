/*1. Write a program to find the largest of 3 numbers using dynamic memory allocation.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numbers;
    int largest, i;
    numbers = (int *)malloc(3 * sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter three numbers: ");
    for (i = 0; i < 3; i++) {
        scanf("%d", &numbers[i]);
    }
    largest = numbers[0];

    for (i = 1; i < 3; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    printf("The largest number is: %d\n", largest);
    free(numbers);

    return 0;
}