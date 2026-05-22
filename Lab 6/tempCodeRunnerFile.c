#include <stdio.h>

int len(char *a);

int main(){
    char a[50];
    int strlen;
    printf("enter the the string\n");
    scanf("%s",&a);

    strlen=len(a);
    printf("the length of string is %d",strlen);
    return 0;
}

int len(char *a){
    char *ptr=a;
    int length=0;
    while (*ptr!='\0'){
        length++;
        ptr++;
    }
    return length;
}