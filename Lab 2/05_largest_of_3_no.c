/*5. Write a program to determine largest of three number. (using If else) */

#include <stdio.h>

int main(){
    int a,b,c;
    printf("enter the first no :\n");
    scanf("%d",&a);
    printf("enter the second no :\n");
    scanf("%d",&b);
    printf("enter the third no :\n");
    scanf("%d",&c);
    if (a>b && a>c){
        printf("%d is the largest number",a);
    }
    else if (c>b && c>a){
        printf("%d is the largest number",c);
    }
    else if (b>a && b>c){
        printf("%d is the largest number",b);
    }
    return 0;
}