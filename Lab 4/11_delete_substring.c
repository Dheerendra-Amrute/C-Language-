/*11. Write a program to delete a substring from a given string.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 
    char substring[100]; 
    char newString[100]; 
    int i, j = 0, k = 0, n = 0;
    int flag = 0;

    printf("Enter any string: ");
    gets(str);

    printf("\nEnter the substring you want to remove: ");
    gets(substring);

    for (i = 0; str[i] != '\0'; i++) {
        k = i;
        while (str[i] == substring[j]) {
            i++, j++;
            if (j == strlen(substring)) {
                flag = 1;
                break;
            }
        }
        j = 0;
        if (flag == 0)
            i = k;
        else
            flag = 0;
        newString[n++] = str[i];
    }
    newString[n] = '\0';

    printf("\nAfter removing the substring: %s\n", newString);

    return 0;
}






/*#include <stdio.h>
#include <string.h>

int main() {
    char String[100];   
    int start_index,end_index;

    printf("Enter the main string: ");
    gets(String);

    printf("Enter the starting index of string to be deleted: ");
    scanf("%d", &start_index);
    printf("Enter the ending  index of string to be deleted: ");
    scanf("%d", &end_index);

    int Length = strlen(String);

    for (int i = Length; i >= start_index || i<=end_index; i--) {
        String[i + subLength] = mainString[i];
    }
    return 0;
}
*/