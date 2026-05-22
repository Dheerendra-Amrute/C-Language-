/*3. Write a C program to find the maximum and minimum of some values using a 
function that returns an array.*/

#include <stdio.h>

int* findMaxMin(int arr[], int size) {
    static int result[2]; 
    int max = arr[0];
    int min = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    result[0] = max;
    result[1] = min;
    
    return result;
}
int main() {
    int arr[] = {3, 5, 1, 9, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int* result = findMaxMin(arr, size);
    printf("Maximum value: %d\n", result[0]);
    printf("Minimum value: %d\n", result[1]);
    
    return 0;
}