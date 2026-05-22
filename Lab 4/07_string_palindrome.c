/*7. Write a program to check whether a string is palindrome or not.*/

#include <stdio.h>
#include <string.h>
void main ()
{
    char c1[10],c2[10];
    printf("Enter string: ");
    scanf("%s",c1);
    
    int j=0;
    for (int i=strlen(c1); i>0; i--)
    c2[j++]=c1[i-1];
    if(strcmp(c1,c2)==0)
    printf("Entered string is palindrome.");
    else
    printf("Entered string isn't a palindrome.");
}