#include <stdio.h>

int main(){
    int n,x,smallest,largest ,ps1,ps2;
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
    smallest= a[0];
    for (int i=1; i<n;i++){
        if (smallest > a[i]){
            smallest = a[i];
            ps1=i;
        }
    }
    largest= a[0];
    for (int i=1; i<n;i++){
        if (largest < a[i]){
            largest = a[i];
            ps2=i;
        }
    }
    a[ps1]=largest;
    a[ps2]=smallest;

    printf("\narray after interchange: \n");
    for(int i=0; i<n;i++){
        printf("%d ", a[i]);
    }

    return 0;
}