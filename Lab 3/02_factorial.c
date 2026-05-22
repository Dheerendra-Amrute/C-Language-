/*2. Write a program to print factorial of a number entered by the user.*/

#include <stdio.h>

int main(){
    int n , factorial=1 , i;
    printf("enter the no : ");
    scanf("%d",&i);
    n=i;
    while(n>0){
        factorial*=n;
        n--;
    }
    printf("the factorial of %d is %d",i,factorial);
    return 0;
}