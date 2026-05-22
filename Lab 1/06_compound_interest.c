//Write a program to calculate compound interest.

#include <stdio.h>
#include <math.h>

int main(){
    float p,r,t;
    printf("Enter the principle amount : \n");
    scanf("%f",&p);
    printf("Enter the rate of interest in percent : \n");
    scanf("%f",&r);
    
    printf("Enter the time : \n");
    scanf("%f",&t);
    printf("Compound Interest is %f \n", (p* pow((1+(r/100)),t))-p);
    return 0;
}