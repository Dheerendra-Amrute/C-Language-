/*10. Write a program to print the records in reverse order. Use fseek().*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[100],revstr[100];
    int len;

    FILE *ptr;
    ptr = fopen("01file.txt","r");
    int check=0;
    fscanf(ptr,"%s",&str);
    fclose(ptr);

    len=strlen(str);
   // printf("%d",len);
    for(int i =0 ; i<len;i++){
        revstr[i] = str[len-i-1];
    }
    revstr[len]= '\0';
    puts(revstr);
    
    return 0;

}