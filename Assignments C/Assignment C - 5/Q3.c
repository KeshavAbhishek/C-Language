// Q3. WAP to check whether a number is less than 0 or greater than 0 and if greater than 10 or not or in between 0 and 10.

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