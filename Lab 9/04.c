/*4. Write a program to copy one file into another by coping multiple character at a time.*/

#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    FILE *ptr1;
    ptr = fopen("01file.txt","r");
    ptr1 = fopen("04file.txt","w");
    char str1[100],str2[100];
    fscanf(ptr,"%s",&str1);
    strcpy(str2,str1);
    fprintf(ptr1,str2);
    fclose(ptr);
    fclose(ptr1);
    printf("data copied sussessfully.......");
    return 0;
}