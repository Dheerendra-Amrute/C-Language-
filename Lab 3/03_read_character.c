/*3. Write a program to read characters until an * is encountered. Also, count the 
number of uppercase, lowercase, and numbers entered by the user.*/

#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch;
    int uppercase = 0, lowercase = 0, numbers = 0;

    printf("Enter characters (terminate with '*'):\n");

    while (1) {
        scanf(" %c", &ch);

        if (ch == '*')
            break;

        if (isupper(ch))
            uppercase++;
        else if (islower(ch))
            lowercase++;
        else if (isdigit(ch))
            numbers++;
    }

    printf("\nResults:\n");
    printf("Uppercase letters: %d\n", uppercase);
    printf("Lowercase letters: %d\n", lowercase);
    printf("Numbers: %d\n", numbers);

    return 0;
}