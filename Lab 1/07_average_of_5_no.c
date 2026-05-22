//7. Write a program to take 5 numbers as input from the keyboard and print their average.
#include <stdio.h>

int main(){
    float a,b,c,d,e;
    printf("enter the a: \n ");
    scanf("%f",&a);
    printf("enter the b: \n ");
    scanf("%f",&b);
    printf("enter the c: \n ");
    scanf("%f",&c);
    printf("enter the d: \n ");
    scanf("%f",&d);
    printf("enter the e: \n ");
    scanf("%f",&e);
    printf("the average is %f",(a+b+c+d+e)/5);
    return 0;
}