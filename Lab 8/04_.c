/*4. Define a structure rectangle to represent a rectangle with length and width. Write a
program to create a structure pointer, allocate memory dynamically, initialize its
members, and calculate the area of the rectangle*/

#include <stdio.h>
#include <stdlib.h> // For dynamic memory allocation

// Define the Rectangle structure
struct Rectangle {
    float length;
    float width;
};

int main() {
    // Create a pointer to a Rectangle structure
    struct Rectangle* rectPtr;

    // Dynamically allocate memory for the Rectangle structure
    rectPtr = (struct Rectangle*)malloc(sizeof(struct Rectangle));

    if (rectPtr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    // Initialize the members of the Rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &rectPtr->length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &rectPtr->width);

    // Calculate the area of the rectangle
    float area = rectPtr->length * rectPtr->width;

    printf("Area of the rectangle: %.2f square units\n", area);

    // Free the dynamically allocated memory
    free(rectPtr);

    return 0;
}