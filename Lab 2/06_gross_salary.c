/*6. Ram's basic salary is input through the keyboard. His dearness allowance is 
40% of basic salary, and house rent allowance is 20% of basic salary. Write a 
program to calculate his gross salary.*/
#include <stdio.h>

int main(){
    float sal,gross_sal,house_rent_allow,dearness_allow;
    printf("Enter the basic salary : \n");
    scanf("%f",&sal);
    dearness_allow = 0.4*sal;
    house_rent_allow = 0.2*sal;
    gross_sal= sal + house_rent_allow + dearness_allow;
    printf("gross salary = %f",gross_sal);
    return 0;
}