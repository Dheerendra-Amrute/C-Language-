/*9.  Write a program to extract a substring from a given string where the starting 
position and length of substring will be given by the user*/

#include <stdio.h>
#include <string.h>


void main()
{
    int a,b,t=0; 
    char c[20];
    printf("Enter string : ");
    scanf("%s",c);
    printf("Enter starting and end point :- \n");
    scanf("%d",&a);
    scanf("%d",&b);
    char n[b-a];
    for (int i=a; i<=b; i++)
    n[t++]=c[i];
    printf("The extracted substring is'%s'",n);
}