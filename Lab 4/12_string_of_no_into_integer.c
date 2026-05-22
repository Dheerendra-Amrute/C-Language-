/*12. Write a program to convert a given string of numbers into integer both by 
using atoi() and also writing its code by own.*/


#include <stdio.h>
#include <stdlib.h> 

int customAtoi(char* str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    for (; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
        } else {
            return 0;
        }
    }

    return sign * result;
}

int main() {

    char str[100];
    printf("enter the string number : ");
    scanf("%s",&str);

    int num1 = atoi(str);
    int num2 = customAtoi(str);

    printf("Using atoi(): %d\n", num1);
    printf("Custom atoi(): %d\n", num2);

    return 0;
}