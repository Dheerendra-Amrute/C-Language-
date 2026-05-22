/*10. Distance between two cities in km is input through the keyboard. Write a program to 
convert this distance in meters*/

#include <stdio.h>

int main(){
    float d;
    printf("enter the Distance between two cities in km : \n ");
    scanf("%f",&d);
    printf("Distance between two cities in meter is %f meters",d*1000);
    return 0;
}