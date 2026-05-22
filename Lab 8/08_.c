/*8. Write a program to read an already existing file using various method fscanf(),
fgetc(), fgets() and fread().*/

#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("demo.txt","r");
    char c,d;
    if (ptr!=NULL){
        printf("file exist\n");
        c=fgetc(ptr);
        printf("fgets= %c\n",c);
        fscanf(ptr,"%c",&d);
        printf("fscanf= %c\n",d);

    }
    else
        printf("file does not exist");
    
    
    
    fclose(ptr);
    return 0;
}
