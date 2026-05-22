/*8. Write a C program to 
a) add two matrix using pointers
b) multiply two matrix using pointers.*/

#include <stdio.h>

int main(){
    int n;
    printf("enter the order of square matrix:\n");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    int *ptra=a;
    for (int i=0; i<n ; i++){
        for (int j=0 ; j<n ; j++ ){
            printf("enter the value of a%d%d  : ",i+1,j+1);
            scanf("%d",ptra);
            ptra++;
        }
    }

    int *ptrb=b;
    for (int i=0; i<n ; i++){
        for (int j=0 ; j<n ; j++ ){
            printf("enter the value of b%d%d : ",i+1,j+1);
            scanf("%d",ptrb);
            ptrb++;
        }
    }
    int*ptr1=a; 
    int*ptr2=b;
    int*ptr3=c;
    for (int i=0; i<n ; i++){
        for (int j=0 ; j<n ; j++ ){
            *ptr3 = *ptr1 + *ptr2 ;
            *ptr1++;
            *ptr2++;
            *ptr3++;
        }
    }
    int *ptrc=c;
    printf("The mat a + mat b is :\n");
    for (int i=0; i<n ; i++){
        for (int j=0 ; j<n ; j++ ){
            printf("%d  ",*ptrc);
            *ptrc++;
        }
        printf("\n");
    }
    return 0;
}