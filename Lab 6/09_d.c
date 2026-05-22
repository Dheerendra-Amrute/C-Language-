/*9. Write a C program to 
a) find length of string using pointer
b) copy one string to another using pointers.
c) concatenate two strings using pointers.
d) compare two strings using pointers.
e) ind reverse of a string using pointers.*/

#include <stdio.h>
#include <string.h>
int main(){
    char str1[100];
    char str2[100];
    int strlen;
    printf("enter the the string\n");
    gets(str1);
    printf("enter the the string\n");
    gets(str2);
    if (strcmp(str1,str2)==0){
        printf("str1 is equal to str2");
    }
    else
        printf("str1 is not equal to str2");


    return 0;
}