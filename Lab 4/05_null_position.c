/*5.  Write a program to find the position of NULL char in the string array*/

#include <stdio.h>

int null_ch_position(char *a);

int main(){
    char a[50];
    int position;
    printf("enter the string\n");
    scanf("%s",&a);

    position=null_ch_position(a);
    printf("the position of null char in string is %d",position);
    return 0;
}

int null_ch_position(char *a){
    char *ptr=a;
    int position=0;
    while (*ptr!='\0'){
        position++;
        ptr++;
    }
    return position+1;
}