/*6. Write a C program to 
a) swap two arrays using pointers.
b) reverse an array using pointers*/

#include <stdio.h>

void swapcase(int* a,int* b);

int main(){
    int a=3,b=4;
    printf("the value of a and b before swaping is %d and %d\n",a,b);
    swapcase(&a,&b);
    printf("the value of a and b after swaping is %d and %d\n",a,b);
    return 0;
}
void swapcase(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
