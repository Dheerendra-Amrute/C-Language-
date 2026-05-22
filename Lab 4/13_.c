/*13. Write a program to use character manipulation functions i.e isalnum(), 
isdigit(), islower(), tolower(), isprint(). (Defined in <ctype.h>)*/



#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);

    printf("isalnum('A'): %d\n", isalnum(ch));

    printf("isdigit('A'): %d\n", isdigit(ch));

    printf("islower('A'): %d\n", islower(ch));

    printf("tolower('A'): %c\n", tolower(ch));

    printf("isprint('A'): %d\n", isprint(ch));

    return 0;
}