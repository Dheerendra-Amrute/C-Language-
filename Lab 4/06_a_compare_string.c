/*6.  Write a program to 
a) compare two strings
b) concatenate two strings
c) convert all the lowercase char of the string into uppercase.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "world";

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
