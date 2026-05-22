/*4. Write a program in C to store n elements in an array and print the elements using a 
pointer*/

#include <stdio.h>

int main(){
    int n;
    printf("enter the no of element in array : ");
    scanf("%d",&n);
    int array[n];
    // int *ptr=&marks[0];
    int *ptr=array;
    for(int i=0;i<n;i++){
        printf("enter the element %d :",i+1);
        scanf("%d",ptr);
        ptr++;
    }   
    printf("the array is :");
    for(int i=0;i<n;i++){
        printf("%d , ",array[i]);
    }
    return 0;
}