#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter any two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Original value of num1 = %d\n", num1);
    printf("Original value of num2 = %d\n", num2);

    // Swap two numbers using bitwise XOR
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    printf("After swapping, num1 = %d\n", num1);
    printf("After swapping, num2 = %d\n", num2);

    return 0;
}