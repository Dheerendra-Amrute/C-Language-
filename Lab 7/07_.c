/*7.Write a program to find largest of three numbers using structure */

struct largest
{
    int num1;
    int num2;
    int num3;
};

#include <stdio.h>

int main(){
    struct largest l;
    printf("enter the 3 numbers :\n");
    scanf("%d%d%d",&l.num1,&l.num2,&l.num3);
    if (l.num1>l.num2 && l.num1>l.num3){
        printf("%d is the largest number",l.num1);
    }
    else if (l.num3>l.num2 && l.num3>l.num1){
        printf("%d is the largest number",l.num3);
    }
    else if (l.num2>l.num1 && l.num2>l.num3){
        printf("%d is the largest number",l.num2);
    }
    return 0;
}