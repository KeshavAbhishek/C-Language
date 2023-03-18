// 1. WAP to input a number and check whether the number is even or odd by using conditional statement.

#include <stdio.h>

int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    if(number%2==0){
        printf("Number is even.");
    }
    else{
        printf("Number is odd.");
    }
    return 0;
}

/*
Output

Enter a number : 15
Number is odd.

Enter a number : 20
Number is even.
*/