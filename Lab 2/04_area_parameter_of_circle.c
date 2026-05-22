/*4. Write a program to take as input the radius of a circle and calculate and display
its area and perimeter.*/
#include <stdio.h>

int main(){
    float r,area,perimeter;
    printf("enter the radius:\n");
    scanf("%f",&r);
    area= 3.14*r*r;
    perimeter=2*3.14*r;
    printf("Area = %f\n",area);
    printf("perimeter = %f\n",perimeter);
    return 0;
} 