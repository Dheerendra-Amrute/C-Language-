/*3. Write a program to copy one file into another by coping one character at a time*/

#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    FILE *ptr1;
    ptr = fopen("01file.txt","r");
    ptr1 = fopen("03file.txt","w");
    char c;
    c=fgetc(ptr);
    while (c!=EOF){
        putc(c,ptr1);
        c=fgetc(ptr);

    }
    fclose(ptr);
    fclose(ptr1);
    printf("data copied sussessfully.......");
    return 0;
}