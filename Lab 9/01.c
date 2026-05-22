/*1. Write a program to count the number of characters and number of lines in a file.*/

#include <stdio.h>

int main(){
    FILE *ptr;
    int character=0;
    int lines=0;
    ptr = fopen("01file.txt","r");
    char c;
    c=fgetc(ptr);
    while(c!=EOF){
        if (c=='\n'){
            lines++;
        }
        c=fgetc(ptr);
        character++;
    }
    fclose(ptr);
    printf("the no of character in file is: %d\n",character);
    printf("the no of lines in file is: %d",lines);
    return 0;
}
