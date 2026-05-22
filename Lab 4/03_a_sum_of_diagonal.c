/*3.  Write a program that reads a matrix and displays 
a) Sum of its diagonals.
*/

#include <stdio.h>

int main(){
    int n;
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
        }
        printf("\n");  
    }
    int diag_sum=0;
    for (int i=0; i<n ; i++){
        for (int j=0 ; j<n ; j++ ){   
            if (i==j){
                diag_sum+=a[i][j];
            }
        }
    }
    printf("sum of diagonal elements = %d",diag_sum);
    return 0;
}