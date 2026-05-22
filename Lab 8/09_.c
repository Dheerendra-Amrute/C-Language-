/*9. Write a program to write in a file using various method fprintf(), fputc(), fputs() and
fwrite().*/

#include <stdio.h>

int main(){
    FILE*fptr;
    int num = 45,num2;
    fptr = fopen("generated.txt","w");
    // fscanf(fptr,"%d",&num);
    // fscanf(fptr,"%d",&num2);
    fprintf(fptr,"my name is dheerendra\n");
    fprintf(fptr,"num = %d",num);
    putc('c',fptr);
    putc('c',fptr);
    //printf("num = %d",num2);
    fclose(fptr);
    printf("data added successfully...\n");
    printf("you can read for generated.txt file");

    
    return 0;
} 