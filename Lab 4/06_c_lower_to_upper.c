/*6.  Write a program to 
a) compare two strings
b) concatenate two strings
c) convert all the lowercase char of the string into uppercase.*/

#include <stdio.h>
#include <string.h>

int main() {
    char lowerChar[100];
    printf("enter the string:\n");
    gets(lowerChar);
    
    strupr(lowerChar);

    printf("Uppercase string is %s\n", lowerChar);

    return 0;
}
