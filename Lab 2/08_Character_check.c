/*8. Write a program to determine whether a character entered through keyboard is 
a special symbol or not.
Characters ASCII Values
A – Z       65 - 90
a – z        97 – 122
0 – 9        48 – 57
Special symbols   0 - 47, 58 - 64, 91 - 96, 123 – 127*/

#include <stdio.h>

int main() {
    char inputChar;

    printf("Enter a character: ");
    scanf(" %c", &inputChar); 
    printf("ASCII value of %c is %d \n",inputChar,inputChar);
    
    if ((inputChar >= 0 && inputChar <= 47) || 
        (inputChar >= 58 && inputChar <= 64) ||
        (inputChar >= 91 && inputChar <= 96) ||
        (inputChar >= 123 && inputChar <= 127)) {
        printf("%c is a special symbol.\n", inputChar);
    }
    else if (48<=inputChar && inputChar<=57){
        printf("%c is number between 0-9\n", inputChar);
    } 
    else if (65<=inputChar && inputChar<=90){
        printf("%c is uppercase A-Z character.\n", inputChar);
    } 
    else if (97<=inputChar && inputChar<=122){
        printf("%c is lowercase a-z character.\n", inputChar);
    } 
    else {
        printf("%c is not a special symbol.\n", inputChar);
    }

    return 0;
}