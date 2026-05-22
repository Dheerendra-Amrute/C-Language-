/*9. Write a program to find a number which is divisible by 5 and 8 and not by 6 
and 9*/

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 5 == 0 && number % 8 == 0 && number % 6 != 0 && number % 9 != 0) {
        printf("%d is divisible by 5 and 8, but not by 6 and 9.\n", number);
    } else {
        printf("%d does not meet the specified conditions.\n", number);
    }

    return 0;   
}