/*7. Write a program to read the details of as student and then print it on the screen as
well as write it into a file.*/

#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    FILE *ptr1;
    ptr = fopen("07_file.txt","r");
    ptr1 = fopen("07_1file.txt","w");
    char c;
    c=fgetc(ptr);
    while (c!=EOF){
        putc(c,ptr1);
        printf("%c",c);
        c=fgetc(ptr);

    }
    fclose(ptr);
    fclose(ptr1);
    printf("\ndata copied sussessfully.......");
    return 0;
}