#include <stdio.h>

#include <stdio.h>

int main(){
    int a,j,i;
    char ch= 'A';
    printf("enter the no.\n");
    scanf("%d",&a);
    //printf("a=%d",a);
    for(i=0; i<a+1; i++){
        for (j=0;j<i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}