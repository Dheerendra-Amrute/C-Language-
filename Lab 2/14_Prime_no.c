/*14. Write a program to check whether a given number is prime or not*/
#include <stdio.h>

int main(){
    int n, i=2,k=0;
    printf("enter the no : ");
    scanf("%d",&n);
    if (n==1 ){
        printf("%d is not a prime no.\n",n);
        }
    else if (n==2){
        printf("%d is a prime no.\n",n);
    }
    while (i<=n){
        if (n%i == 0 ){
            k++;
        }
        i++;
    }
    if (k>1){
        printf("%d is not a prime no.\n",n);
    }
    else{
        printf("%d is a prime no.\n",n);
    }
    return 0;
}
