/*11. If the three sides of a triangle are entered through the keyboard, write a 
program to check whether the triangle is isosceles, equilateral, scalene or right 
angled triangle.*/
#include <stdio.h>

int main() {
    int side1, side2, side3;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3) {
        printf("The triangle is an equilateral triangle.\n");
    } else if (side1 == side2 || side2 == side3 || side3 == side1) {
        printf("The triangle is an isosceles triangle.\n");
    } else if (side1*side1 == side2*side2 + side3*side3 ||
               side2*side2 == side1*side1 + side3*side3 ||
               side3*side3 == side1*side1 + side2*side2) {
        printf("The triangle is a right-angled triangle.\n");
    } else {
        printf("The triangle is a scalene triangle.\n");
    }

    return 0;
    
}