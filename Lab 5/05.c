/*5. Write a program to calculate the power of a number using recursion.*/

#include <stdio.h>

// Function to calculate power using recursion
int power(int base, int exponent) {
    if (exponent != 0)
        return (base * power(base, exponent - 1));
    else
        return 1;
}

int main() {
    int base, exponent, result;

    printf("Enter base number: ");
    scanf("%d", &base);

    printf("Enter power number (positive integer): ");
    scanf("%d", &exponent);

    result = power(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}