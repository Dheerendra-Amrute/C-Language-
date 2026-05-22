//9. Write a program for calculating the roots of a quadratic equation
#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c;
    printf("enter a b and c according to equation : aX^2 + bX + c = 0 \n");
    printf("enter the a \n ");
    scanf("%f",&a);
    printf("enter the b \n ");
    scanf("%f",&b);
    printf("enter the c \n ");
    scanf("%f",&c);
    printf("the first root is %f and second root is %f", (-b + sqrt(((b*b)-(4*a*c))))/(2*a) ,(-b - sqrt(((b*b)-(4*a*c))))/(2*a));

    return 0;
}