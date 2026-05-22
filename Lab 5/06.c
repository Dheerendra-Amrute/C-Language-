/*6. Write a program to multiple 2 matrices using functions*/

void matrix_multiply(int n,int a[n][n],int b[n][n]);

#include <stdio.h>

int main(){
    int n;
    printf("enter the order of square matrix:\n");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];

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
            printf("enter the value of a%d%d : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("The mat b is :\n");
    for (int i=0; i<n ; i++){
        for (int j=0 ; j<n ; j++ ){
            printf("%d  ",a[i][j]);
        }
        printf("\n");  
    }

    matrix_multiply(n,a,b);
    return 0;
}

void matrix_multiply(int n,int a[n][n],int b[n][n]){
    int c[n][n];
    for (int i=0; i<n ; i++){
        for (int j=0 ; j<n ; j++ ){
            int sum=0;
            for (int k=0 ;k<n;k++){
                    sum+= (a[j][k])*(b[k][i]);
            
            } 
            c[j][i] = sum;  
        }
    }

    printf("The multiplication of mat a and mat b is :\n");
    for (int i=0; i<n ; i++){
        for (int j=0 ; j<n ; j++ ){
            printf("%d  ",c[i][j]);
        }
        printf("\n");  
    }
}
