/*5. Write a program to calculate simple interest by taking principal, rate and time as input 
from user*/
#include <stdio.h>
int main(){
    float p,r,t;
    printf("Enter the principle amount : \n");
    scanf("%f",&p);
    printf("Enter the rate of interest in percent : \n");
    scanf("%f",&r);
    printf("Enter the time : \n");
    scanf("%f",&t);
    printf("Simple Interest is %f \n", (p*r*t)/100);
    return 0;
}