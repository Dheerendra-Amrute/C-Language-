/*9. Write a C program to 
a) find length of string using pointer
b) copy one string to another using pointers.
c) concatenate two strings using pointers.
d) compare two strings using pointers.
e) ind reverse of a string using pointers.*/

#include <stdio.h>
int main(){
    char str1[100];
    char str2[100];
    int strlen; int*ptrs1=str1; int*ptrs2=str2;
    printf("enter the the string\n");
    gets(str1);
    printf("enter the the string\n");
    gets(str2);
    strcat(str1,str2);
    puts(str1);
    return 0;
}