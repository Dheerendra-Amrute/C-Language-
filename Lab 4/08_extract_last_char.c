/*8.  Write a program to extract last n characters of a string.*/

#include <stdio.h>
#include <string.h>

void main ()
{
    int n; char s[10],ns[n];
    printf("Enter string : ");
    scanf("%s",s);
    printf("Enter n = ");
    scanf("%d",&n);
    int t=n-1;
    for(int i=0;i<n;i++)
    ns[t--]=s[strlen(s)-n-i+1];
    printf("%s",ns);
}