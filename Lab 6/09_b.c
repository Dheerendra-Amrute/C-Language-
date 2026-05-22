/*9. Write a C program to 
a) find length of string using pointer
b) copy one string to another using pointers.
c) concatenate two strings using pointers.
d) compare two strings using pointers.
e) ind reverse of a string using pointers.*/


#include <stdio.h>
#include <string.h>

int len(char *a);

int main(){
    char str1[100];
    char str2[100];
    int strlen;
    printf("enter the the string\n");
    gets(str1);
    strcpy(str2,str1);
    printf("str1 = ");
    puts(str1);
    printf("copied str2 = ");
    puts(str2);

    return 0;
}