/*1. Write a program to find average of all the elements of a 2 dimensional array.*/

#include <stdio.h>

int main(){
    int sum=0,n;
    printf("enter the order of square matrix:\n");
    scanf("%d",&n);
    int a[n][n];

    for (int i=0; i<n ; i++){
        for (int j=0 ; j<n ; j++ ){
            printf("enter the value of a%d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("The mat a is :\n");
    for (int i=0; i<n ; i++){
        for (int j=0 ; j<n ; j++ ){
            printf("%d  ",a[i][j]);
            sum+=a[i][j];
        }
        printf("\n");  
    }
    printf("Average =%f", (float) sum / (float) (n*n));
    return 0 ;
}