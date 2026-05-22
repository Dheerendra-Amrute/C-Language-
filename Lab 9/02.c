/*2. Write a program to compare two files to check whether they are identical or not.*/

#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    FILE *ptr1;
    ptr = fopen("02_1file.txt","r");
    ptr1 = fopen("02file.txt","r");
    char str1[100],str2[100];
    int check=0;
    fscanf(ptr,"%s",&str1);
    fscanf(ptr1,"%s",&str2);
    if (strcmp(str2,str1)==0)
        check++;
    fclose(ptr);
    fclose(ptr1);
    if (check>0){
        printf("file is not identical %d",check);
        
    }
    else{
        printf("file is identical");
    }
    return 0;
}
