/*4. Write a program for performing subtraction, multiplication and division operation taking 
the number as input from the user.*/
#include <stdio.h>

int main(){
    int a,b,n;
    printf("enter the a: \n ");
    scanf("%d",&a);
    printf("enter the b: \n ");
    scanf("%d",&b);

    printf("press 1 for substraction  \n");
    printf("press 2 for multiplication \n");
    printf("press 3 for division \n");
    scanf("%d",&n);
    
    if (n==1){
        printf("the substraction of two no is %d",a-b);
    }
    else if (n==2){
        printf("the multiplication of two no is %d",a*b);
    }
    else if (n==3){
        printf("the division of two no is %d",a/b);
    }
    else if(n>3){
        printf("press valid button 1,2 or 3");
    }
    return 0;
}