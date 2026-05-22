/*7. Write a program using file handling to check whether a file already exist or not.*/

#include <stdio.h>

int main(){
    FILE*ptr;
    int num,num2;
    char filename[20];
    printf("enter the file name in specified format filename.txt: ");
    scanf("%s",filename);
    ptr = fopen(filename,"r");
    if (ptr!=NULL)
        printf("file exist");
    else
        printf("file does not exist");

    fclose(ptr);
    return 0;
} 