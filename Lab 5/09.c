/*9. Write a program in C  to put even and odd elements of array in two separate 
array using functions*/

#include <stdio.h>

void separateEvenOdd(int arr[], int size, int even[], int odd[], int *evenSize, int *oddSize) {
    *evenSize = 0;
    *oddSize = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[*evenSize] = arr[i];
            (*evenSize)++;
        } else {
            odd[*oddSize] = arr[i];
            (*oddSize)++;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int even[size], odd[size];
    int evenSize, oddSize;

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    separateEvenOdd(arr, size, even, odd, &evenSize, &oddSize);

    printf("Even elements: ");
    printArray(even, evenSize);

    printf("Odd elements: ");
    printArray(odd, oddSize);

    return 0;
}