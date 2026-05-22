/*9. Write a C program to 
a) find length of string using pointer
b) copy one string to another using pointers.
c) concatenate two strings using pointers.
d) compare two strings using pointers.
e) ind reverse of a string using pointers.*/


#include <stdio.h>
#include <string.h>

int main(){
    char str[100],revstr[100];
    int len;

    printf("enter the string: \n");
    gets(str);

    len=strlen(str);
   // printf("%d",len);
    for(int i =0 ; i<len;i++){
        revstr[i] = str[len-i-1];
    }
    revstr[len]= '\0';
    puts(revstr);
    
    printf("reversed string is %s",revstr);
    return 0;

}