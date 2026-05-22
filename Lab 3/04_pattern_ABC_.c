/*4. Write a program to print the following pattern :
A
AB
ABC
ABCD
ABCDE
*/
#include <stdio.h>

int main(){
    int a,i,j;
    
    printf("enter the no.\n");
    scanf("%d",&a);
    //printf("a=%d",a);
    for(i=1; i<=a; i++){
        char k= 'A';
        for (j=1;j<=i ;j++){
            printf("%c ",k);
            k++;
        }
        printf("\n");
    }

    return 0;
}