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
    
    if (strcmp(str,revstr)==0)
        printf("entered string is pallindrome");
    else
        printf("entered string is not pallindrome");
    return 0;

}