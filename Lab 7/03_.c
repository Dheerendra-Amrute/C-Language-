/*3. Write a program that dynamically allocates memory for a string entered by the user.
Print the string back to the user.*/

#include <stdio.h>
#include <stdlib.h> // For malloc and free

int main() {
    char *str;
    int len;

    // Input the length of the string
    printf("Enter the length of the string: ");
    scanf("%d", &len);
    fflush(stdin);

    // Allocate memory for the string
    str = (char *)malloc((len + 1) * sizeof(char)); // +1 for null terminator
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input the string
    printf("Enter the string: ");
    scanf(" ");
    fgets(str, len + 1, stdin); // Read up to len+1 characters, including newline
    fflush(stdin);
    // Print the string
    printf("The string is: %s\n", str);

    // Free the dynamically allocated memory
    free(str);

    return 0;
}