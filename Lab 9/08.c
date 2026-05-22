/*8. Write a program to read the details of as student from a file and then print it on the
screen.*/

#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    ptr = fopen("07_file.txt","r");
    char c;
    c=fgetc(ptr);
    while (c!=EOF){
        printf("%c",c);
        c=fgetc(ptr);

    }
    fclose(ptr);
    printf("\ndata copied sussessfully.......");
    return 0;
}