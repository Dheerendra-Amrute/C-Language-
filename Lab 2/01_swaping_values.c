/*1. Write a program to swap the values of two variables with the help of third 
variable and without using third variable.*/
#include <stdio.h>

int main(){
    int a=10,b=20,c,d;
    printf("press 1 for variable swaping with third variable\n");
    printf("press 2 for variable swaping without third variable\n");
    scanf("%d",&d);
    if (d == 1){
        c=a;
        a=b;
        b=c;
        printf("with third variable\n");
        printf("value of a is %d \n",a);
        printf("value of b is %d \n",b);
    }
    else if (d==2){
        a=a+b;
        b=a-b;
        a=a-b;
        printf("without third variable\n");
        printf("value of a is %d \n",a);
        printf("value of b is %d \n",b);
    }
    

    return 0;
}