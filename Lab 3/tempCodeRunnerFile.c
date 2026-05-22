#include <stdio.h>

int main(){
    float sum=0;
    int n;
    printf("enter the n\n");
    scanf("%d",&n);

    for (float i=1; i<=n; i++){
        sum+= (i/(i));
        
    }
    printf("sum = %f",sum);
    
    return 0;
}