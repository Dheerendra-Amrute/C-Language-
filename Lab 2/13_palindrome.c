/*13. Write a program to check whether a given number is palindrome or not.*/
#include <stdio.h>

int main(){
    int a,b,rev,original;
    printf("enter the no. :");
    scanf("%d",&b);
    original=b;
    rev=0;
    while (b!=0){
        a=b%10;
        rev=rev*10+a;
        b=b/10;
    }
    if (rev==original){
        printf("%d is pallindrome",original);
    }
    else{
        printf("%d is not pallindrome",original);
    }
    return 0;
}