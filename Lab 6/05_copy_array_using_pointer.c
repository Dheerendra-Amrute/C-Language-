/*5. Write a C program to copy one array to another using pointers.*/
# include <stdio.h>
int main(){
    int n;
    printf("enter the no of element in array : ");
    scanf("%d",&n);
    int array1[n];
    int array2[n];
    int *ptr1=array1;
    int *ptr2=array2;
    for(int i=0;i<n;i++){
        printf("enter the element %d :",i+1);
        scanf("%d",ptr1);
        ptr1++;
    }   
    printf("the array1 is :");
    for(int i=0;i<n;i++){
        printf("%d  ",array1[i]);
    }
    for(int i=0;i<n;i++){
        *ptr2 = array1[i];
        
        ptr2++;
    } 
    printf("\nthe array2 is :");
    for(int i=0;i<n;i++){
        printf("%d  ",array2[i]);
    }

    return 0;
}