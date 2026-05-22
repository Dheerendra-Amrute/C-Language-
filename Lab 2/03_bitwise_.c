/*3. Write a program to illustrate the use of AND and Left shift bitwise operator.*/

#include <stdio.h>

int main() {
    int num1 = 10; // Binary: 1010
    int num2 = 3;  // Binary: 0011

    int result_and = num1 & num2;
    int result_shift = num1 << 2; // Shift left by 2 positions

    printf("Result of num1 & num2: %u\n", result_and);
    printf("Result of num1 << 2: %u\n", result_shift);

    return 0;
}