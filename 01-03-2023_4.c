#include <stdio.h>

int main(){
    int num1,num2;
    printf("\n");
    
    printf("Enter 1st number : ");
    scanf("%d", &num1);

    printf("Enter 2nd number : ");
    scanf("%d", &num2);

    printf("\n");

    if(num1==num2){
        printf("Both numbers are equal.");
    }
    else{
        if(num1>num2){
            printf("1st number is greater than 2nd number.");
        }
        else{
            printf("2nd number is greater than 1st number.");
        }
    }
    return 0;
}