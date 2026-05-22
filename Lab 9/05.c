/*5. Write a program to read a file that contains lower case characters. Then write these
characters into another file with all lower case letters converted into upper.*/

#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    FILE *ptr1;
    ptr = fopen("01file.txt","r");
    ptr1 = fopen("05file.txt","w");
    char str1[100];
    fscanf(ptr,"%s",&str1);
    strupr(str1);

    fprintf(ptr1,str1);
    fclose(ptr);
    fclose(ptr1);
    printf("data copied sussessfully.......");
    return 0;
}
