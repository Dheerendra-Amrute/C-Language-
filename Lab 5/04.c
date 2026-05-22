/*4. Write a program to calculate factorial of a number given by the user using 
recursion.*/

#include <stdio.h>

int factorial(int n);

int main(){
    int n ,a;
    printf("enter the no\n");
    scanf("%d",&n);
    a=factorial(n);
    printf("the value of factorial of %d is %d\n",n,a);
    return 0;
}
int factorial(int x){
    if (x==1 || x==0){
        return 1;
    }
    else{
        return factorial(x-1) * x ;
    }
}