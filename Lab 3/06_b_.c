/*6. Write a program to print the sum of the series where number of terms should 
be entered by the user :
b)                     12/1 + 22/2 + 32/3 + ................
*/
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