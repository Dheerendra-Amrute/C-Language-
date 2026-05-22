#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("enter the string to check pallindrome : \n");
    scanf("%s",str);
    int length = strlen(str);
    char revstr[100];
    for (int i=0 ; i<length;i++){
       revstr[i]=str[length+i-1] ;
    }
    revstr[length]=  '\0';
    puts(revstr);
    printf("\nlength is %d",length);
    return 0;

}
