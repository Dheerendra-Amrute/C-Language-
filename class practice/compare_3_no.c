#include <stdio.h>

int main(){
    int a,b,c;
    printf("enter the first no \n :");
    scanf("%d",&a);
    printf("enter the second no \n:");
    scanf("%d",&b);
    printf("enter the third no :\n ");
    scanf("%d",&c);
    if (a>b){
        if (a>c){
            printf("the greatest value is %d\n",a);
        }
        else{
            printf("the greatest value is %d\n",c);
        }
    }
    else{
        if (b>c){
            printf("the greatest value is %d\n",b);
        }
        else{
            printf("the greatest value is %d\n",c);
        }
    }

    return 0;
}