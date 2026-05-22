/*2. Write a program to swap two numbers using a function:
a) Using call by value*/

#include <stdio.h>

void swapcase(int a, int b);

int main(){
    int a=3,b=4;
    printf("the value of a and b before swaping is %d and %d\n",a,b);
    swapcase(a,b);
    printf("the value of a and b after swaping is %d and %d\n",a,b);
    return 0;
}

void swapcase(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("the value of a and b after swaping in function is %d and %d\n",a,b);
}