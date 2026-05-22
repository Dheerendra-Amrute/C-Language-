#include <stdio.h>

int main(){
    int n;
    printf("Enter the no. : \n");
    scanf("%d",&n);
    if (n%2 == 0){
        printf(" %d is even no ",n); 
    }
    else {
        printf(" %d is odd no ",n);
    }
    return 0;
}