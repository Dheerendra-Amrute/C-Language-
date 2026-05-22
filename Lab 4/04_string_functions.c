/*4.  Write a program to read a string using scanf(), gets(), getchar(), getch() and 
getche() and correspondingly print it using the respective functions*/

#include <stdio.h>
#include <conio.h>

int main() {
    char str[100];

    printf("Enter a string using scanf(): ");
    scanf("%s", str);
    printf("String entered using scanf(): %s\n", str);

    printf("Enter a string using gets(): ");
    gets(str);
    printf("String entered using gets(): %s\n", str);

    printf("Enter a string using getchar(): ");
    int i = 0;
    char c;
    while ((c = getchar()) != '\n') {
        str[i++] = c;
    }
    str[i] = '\0';
    printf("String entered using getchar(): %s\n", str);

    printf("Enter a string using getch(): ");
    i = 0;
    while ((c = getch()) != '\r') {
        str[i++] = c;
        printf("%c", c);
    }
    str[i] = '\0';
    printf("\nString entered using getch(): %s\n", str);

    printf("Enter a string using getche(): ");
    i = 0;
    while ((c = getche()) != '\r') {
        str[i++] = c;
    }
    str[i] = '\0';
    printf("\nString entered using getche(): %s\n", str);

    return 0;
}