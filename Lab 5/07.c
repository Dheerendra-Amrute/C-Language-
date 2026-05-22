/*7. Write a C program to print all strong numbers between given interval using 
functions.*/

#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to check if a number is a strong number
int isStrong(int num) {
    int originalNum = num;
    int sum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    
    return (sum == originalNum);
}

// Function to print strong numbers in a given range
void print_strong_numbers(int start, int end) {
    printf("Strong numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isStrong(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int start, end;
    
    printf("Enter the starting number: ");
    scanf("%d", &start);
    
    printf("Enter the ending number: ");
    scanf("%d", &end);
    
    print_strong_numbers(start, end);
    
    return 0;
}