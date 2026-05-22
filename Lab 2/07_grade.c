/*7. Write a program to read a grade and display the equivalent description. ( S = 
Excellent, A= Very Good, B =  Good, C = Fair, D = Average, F = Fail)*/

#include <stdio.h>

int main(){
    int grade;
    printf("enter the grade : \n");
    scanf("%c",&grade);
    switch (grade){
    case ('S'): 
        printf("Excellent\n");
        break;
    case ('A'): 
        printf("Very Good\n");
        break;
    case ('B'): 
        printf("Good\n");
        break;
    case ('C'): 
        printf("Fair\n");
        break;
    case ('D'): 
        printf("Average\n");
        break;
    case ('F'): 
        printf("Fail\n");
        break;
    }
    return 0;
}