/*8. Write a program for calculating the percentage of a student by taking marks of all the 
subjects as input from the user*/

#include <stdio.h>

int main(){
    float a,b,c,d,e;
    printf("enter all the marks out of 100\n ");
    printf("enter the marks in physics: \n ");
    scanf("%f",&a);
    printf("enter the marks in chemisty : \n ");
    scanf("%f",&b);
    printf("enter the marks in maths : \n ");
    scanf("%f",&c);
    printf("enter the marks in english: \n ");
    scanf("%f",&d);
    printf("enter the marks in computer science: \n ");
    scanf("%f",&e);
    printf("the percentage is %f ",((a+b+c+d+e)/500)*100);
    return 0;
}