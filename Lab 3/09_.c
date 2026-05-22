/* 9. Write a program to delete an element from an array*/

#include <stdio.h>

int main(){
    int n,x,delete;
    printf("enter the no.\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n;i++){
        printf("enter the element %d \n",i+1);
        scanf("%d",&x);
        a[i]=x;
    }
    printf("array is : \n");
    for(int i=0; i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\nenter the position to be deleted: ");
    scanf("%d",&delete);
    for (int i = delete-1;i<n;i++){
        a[i]=a[i+1];
    }
    printf("array after deletion is  : \n");
    for(int i=0; i<n-1;i++){
        printf("%d ", a[i]);
    }

    return 0;
}