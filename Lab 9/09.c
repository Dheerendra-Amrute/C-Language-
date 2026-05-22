/*9. Write a program to count the number of lower case, upper case, numbers and special
character present in the contents of a file.*/

#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *ptr;
    ptr = fopen("03file.txt","r");
    int uppercase=0;
    int lowercase=0;
    int number=0;
    int spcharacter=0;
    char c = fgetc(ptr);
    while (c!=EOF){     
        if (islower(c))
            lowercase++;
        else if (isupper(c))
            uppercase++;
        else if (isdigit(c))
            number++;
        else 
            spcharacter++;
        c = fgetc(ptr);
    }
    fclose(ptr);
    printf("uppercase= %d\n",uppercase);   
    printf("lowercase= %d\n",lowercase);   
    printf("number= %d\n",number);   
    printf("special character= %d\n",spcharacter);   
    return 0;
}