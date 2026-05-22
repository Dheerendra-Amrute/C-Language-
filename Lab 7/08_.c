/*8. Write a program using structure for addition of two complex numbers.*/

#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex num1, num2, sum;

    printf("Enter real and imaginary parts of first complex number:\n");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("Enter real and imaginary parts of second complex number:\n");
    scanf("%f %f", &num2.real, &num2.imag);

    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}