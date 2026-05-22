#include <stdio.h>

int main(){
    int a;
    printf("enter the no.");
    scanf("%d",&a);
    for(int i=1; i<=a; i++){
        for (int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


// #include <stdio.h>

// int main() {
//     int lines;
//     printf("Enter the number of lines: ");
//     scanf("%d", &lines);

//     for (int i = 1; i <= lines; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;

// }