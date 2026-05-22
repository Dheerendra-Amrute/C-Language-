/*10. Write a program to check whether a triangle is valid or not, when the three 
angles of the triangle are entered through keyboard. A triangle is valid if sum 
of all its angle is 180 degrees.*/

#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    printf("Enter three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    
    if (angle1 + angle2 + angle3 == 180) {
        printf("The triangle with angles %d, %d, and %d is valid.\n", angle1, angle2, angle3);
    } else {
        printf("The triangle with angles %d, %d, and %d is not valid.\n", angle1, angle2, angle3);
    }

    return 0 ;
}