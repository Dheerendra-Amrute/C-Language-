/*6. Write a C program to 
a) swap two arrays using pointers.
b) reverse an array using pointers*/

#include <stdio.h>

int revarray(int*a ,int n);

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
        printf("%d  ",array[i]);
    }
    revarray(array ,n);
    return 0;
}

int revarray(int*a , int n){
    int*ptr= a;
    int newarray[n];
    int *ptr2 = newarray;
    for(int i=0;i<n;i++){
        *ptr2 = a[n-1-i];
        ptr2++;
        ptr++;
    }   
    printf("\nthe reverse array is :");
    for(int i=0;i<n;i++){
        printf("%d  ",newarray[i]);
    }

}