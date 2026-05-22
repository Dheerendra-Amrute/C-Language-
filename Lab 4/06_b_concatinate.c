/*6.  Write a program to 
a) compare two strings
b) concatenate two strings
c) convert all the lowercase char of the string into uppercase.*/

#include <stdio.h>

int main() {
    char s1[100] = "programming ";
    char s2[] = "is awesome";
    int length, j;

    length = 0;
    while (s1[length] != '\0') {
        ++length;
    }

    for (j = 0; s2[j] != '\0'; ++j, ++length) {
        s1[length] = s2[j];
    }

    s1[length] = '\0';

    printf("After concatenation: %s\n", s1);

    return 0;
}
