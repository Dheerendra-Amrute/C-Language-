#include <stdio.h>

int main(){
    int n,x;
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
    return 0;
}