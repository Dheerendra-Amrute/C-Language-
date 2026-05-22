/*1. Write a program to display fibonacci series where number of terms should be 
entered by the user.
                             0 1 1 2 3 5 8 13 21 .....
*/
#include <stdio.h>

int main(){
    int n,i,f1=0,f2=1,f;
    printf("Enter the no of terms:\n");
    scanf("%d",&n);
    printf("fabonacci series : ");
    for (i=0;i<=n;i++){
        printf("%d, ",f1);
        f =f1+f2;
        f1=f2;
        f2=f;
    }

    return 0;
}