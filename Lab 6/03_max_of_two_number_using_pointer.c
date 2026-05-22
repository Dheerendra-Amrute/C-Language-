/*3. Write a program in C to find the maximum number between two numbers using a 
pointer.*/

#include <stdio.h>

float max_of_two(float*a,float*b);

float main(){
    float a,b;
    printf("enter the number a and b : \n");
    scanf("%f%f",&a,&b);
    printf("the max of a and b is %f",max_of_two(&a,&b));
    return 0;
}

float max_of_two(float*a,float*b){
    float c = (*a + *b);
    if (*a>*b)
        return *a;
    else
        return *b;
    return c;
}