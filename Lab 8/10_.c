/*10. Write a program to print the last char of an already existing file using file handling.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    char lastChar;

    // Get the filename from the user
    printf("Enter the filename to open: ");
    scanf("%s", filename);

    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file. Make sure it exists.\n");
        return 1;
    }

    // Move the file pointer to the end (next to last character)
    fseek(file, -1, SEEK_END);

    // Read the last character
    lastChar = fgetc(file);

    // Print the last character
    printf("The last character in the file is: %c\n", lastChar);

    // Close the file
    fclose(file);

    return 0;
}