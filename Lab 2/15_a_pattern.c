/*15. Write a program to produce the following pattern where number of line en-
tered by keyboard
*
**
***
****         */
#include <stdio.h>

int main() {
    int lines;
    printf("Enter the number of lines: ");
    scanf("%d", &lines);

    for (int i = 1; i <= lines; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;

}