#include <stdio.h>

int main(){
    int n;
    char x;
    printf("enter the no. of character in string\n");
    scanf("%d",&n);
    char a[n];
    printf("enter the string \n");
    for(int i=0; i<n;i++){
        scanf("%c",&x);
        a[i]=x;
    }
    printf("string using scanf is : ");
    for(int i=0; i<n;i++){
        printf("%c ", a[i]);
    }
     return 0;
}