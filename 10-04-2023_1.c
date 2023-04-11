#include <stdio.h>


void check(int n){
    if(n<0){
        printf("Number is -ve.");
    }
    else if(n>0 && n<10){
        printf("Number is +ve and between 0 to 10.");
    }
    else if(n>10){
        printf("Number is +ve and greater than 10.");
    }
}

int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    check(number);
    return 0;
}