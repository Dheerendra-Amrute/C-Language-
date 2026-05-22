#include <stdio.h>

int main(){
    int a[3][3] , b[3][3], c[3][3];
    for (int i=0; i<3 ; i++){
        for (int j=0 ; j<3 ; j++ ){
            printf("enter the value of a%d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The mat a is :\n");
    for (int i=0; i<3 ; i++){
        for (int j=0 ; j<3 ; j++ ){
            printf("%d  ",a[i][j]);
        }
        printf("\n");  
    }
    for (int i=0; i<3 ; i++){
        for (int j=0 ; j<3 ; j++ ){
            printf("enter the value of b%d%d : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("The mat a is :\n");
    for (int i=0; i<3 ; i++){
        for (int j=0 ; j<3 ; j++ ){
            printf("%d  ",b[i][j]);
        }
        printf("\n");  
    }
    for (int i=0; i<3 ; i++){
        for (int j=0 ; j<3 ; j++ ){
            int sum=0;
            for (int k=0 ;k<3;k++){
                    sum+= (a[j][k])*(b[k][i]);
            
            } 
            c[j][i] = sum;  
        }
    }
    printf("The multiplication of mat a and mat b is :\n");
    for (int i=0; i<3 ; i++){
        for (int j=0 ; j<3 ; j++ ){
            printf("%d  ",c[i][j]);
        }
        printf("\n");  
    }
    return 0;
}