/*6. Write a program to merge two files into a third file.*/

#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    FILE *ptr1;
    FILE *ptr2;
    ptr = fopen("06_1file.txt","r");
    ptr1 = fopen("06_2file.txt","r");
    ptr2 = fopen("06_3file.txt","a");
    char str1[100],str2[100];
    fscanf(ptr,"%s",&str1);
    fscanf(ptr1,"%s",&str2);
    fprintf(ptr2,str1);
    fprintf(ptr2,str2);
    fclose(ptr);
    fclose(ptr1);
    fclose(ptr2);
    printf("data stored to file 3 sussessfully.......");
    return 0;
}