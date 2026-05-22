/*7. Write a C program to access two dimensional array using pointers*/

#include <stdio.h>

int main(){
    int sum=0,n;
    printf("enter the order of square matrix:\n");
    scanf("%d",&n);
    int a[n][n];
    int *ptr=a;
    int *ptr2=a;
    for (int i=0; i<n ; i++){
        for (int j=0 ; j<n ; j++ ){
            printf("enter the value of a%d%d : ",i+1,j+1);
            scanf("%d",ptr2);
            ptr2++;
        }
    }

    printf("The mat a is :\n");
    for (int i=0; i<n ; i++){
        for (int j=0 ; j<n ; j++ ){
            printf("%d  ",*ptr);
            *ptr++;
        }
        printf("\n");  
    }
    return 0;
}