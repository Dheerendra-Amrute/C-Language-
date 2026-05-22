/*2.  Write a program to 
d) Perform transpose of a 2D array*/

#include <stdio.h>

int main(){
    int n;
    printf("enter the order of square matrix:\n");
    scanf("%d",&n);
    int a[n][n],b[n][n];

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
    for (int i=0; i<n ; i++){
        for (int j=0 ; j<n ; j++ ){
            b[i][j] = a[j][i];
        }
    }
    printf("The transpose of mat a is :\n");
    for (int i=0; i<n ; i++){
        for (int j=0 ; j<n ; j++ ){
            printf("%d  ",b[i][j]);
        }
        printf("\n");  
    }
    return 0;
}
