/*10. Write a program to insert a substring into a main string. Main string, substring 
and position of insertion should be taken as input from user.*/

#include <stdio.h>
#include <string.h>

int main() {
    char mainString[100]; 
    char subString[50];  
    int position;

    printf("Enter the main string: ");
    gets(mainString);
    printf("Enter the substring to insert: ");
    gets(subString);

    printf("Enter the index where the substring should be inserted: ");
    scanf("%d", &position);

    int mainLength = strlen(mainString);
    int subLength = strlen(subString);

    for (int i = mainLength; i >= position; i--) {
        mainString[i + subLength] = mainString[i];
    }

    for (int i = 0; i < subLength; i++) {
        mainString[position - 1 + i] = subString[i];
    }
    printf("Modified main string after insertion: %s\n", mainString);

    return 0;
}