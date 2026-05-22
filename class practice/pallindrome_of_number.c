#include <stdio.h>

int main(){
    int n,rem,val=0,a;
    printf("enter the no:");
    scanf("%d",&n);
    a=n;
    while(n!=0){
        rem=n%10;
        n=n/10;
        val=(val*10)+rem;
    }
    if (a==val){
        printf("given no is pallindrome");
    }
    else{
        printf("given no is not pallindrome");
    }
    return 0;
}