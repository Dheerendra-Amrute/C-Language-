/*1. Write a program in C to demonstrate the use of the &(address of) and *(value at 
address) operators.*/

#include <stdio.h>

int main(){
    int i = 34;
    int *j = &i ;// j will store the address of i
    printf("the value of i is %d\n",i);
    printf("the value of i is %d\n",*j);
    printf("the address of i is %u\n",&i);
    printf("the address of i is %u\n",j);
    printf("the address of j is %u\n",&j);
    printf("the value of j is %u\n",*(&j));
    return 0;
}