/*2. Write a program in C to add two numbers using pointers*/

#include <stdio.h>

float sum(float*a,float*b);

float main(){
    float a,b;
    printf("enter the number a and b : \n");
    scanf("%f%f",&a,&b);
    printf("the sum of a and b is %f",sum(&a,&b));
    return 0;
}

float sum(float*a,float*b){
    float c = (*a + *b);
    return c;
}