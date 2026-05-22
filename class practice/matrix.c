#include <stdio.h>

int main(){
    int rows ,columns;
    printf("enter the rows and column :");
    scanf("%d%d",&rows,&columns);
    int r[rows][columns];
    for (int i =0;i<rows;i++){
        for (int j=0 ; j<columns;j++){
            printf("enter the element r%d%d : ",i+1,j+1);
            scanf("%d",&r[i][j]);
        }
    }
        printf("matrix is :\n");
    for (int i =0;i<rows;i++){
        for (int j=0 ; j<columns;j++){
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }    
    return 0;
}