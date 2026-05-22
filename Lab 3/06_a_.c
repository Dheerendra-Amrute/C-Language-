/*6. Write a program to print the sum of the series where number of terms should 
be entered by the user :
a)                      1/ 2 + 2 / 3 + 3 /4 + ..........+ n/ n+1
*/
#include <stdio.h>


int main(){
    float sum=0;
    int n;
    printf("enter the n\n");
    scanf("%d",&n);

    for (float i=1; i<=n; i++){
        sum+= (i/(i+1));   
    }
    printf("sum = %f",sum);
    
    return 0;
}