#include <stdio.h>

int rec_sum_natural_no(int a);

int main(){
    int n;
    printf("enter the no :");
    scanf("%d",&n);
    printf("the factorial of %d is %d ",n,rec_sum_natural_no(n));
    return 0;
}

int rec_sum_natural_no(int a){
    printf("%d",a);
    if (a==0){
        return 0;
    }
    else {
        return rec_sum_natural_no(a-1) + a;
    }
}