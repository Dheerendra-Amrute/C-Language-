//d
#include <stdio.h>

int main() {
    int lines;

    
    printf("Enter the number of lines: ");
    scanf("%d", &lines);


    for (int i = lines; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0 ;
}