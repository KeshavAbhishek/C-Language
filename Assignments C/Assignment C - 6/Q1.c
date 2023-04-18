// 1. WAP in C to count the digits of a given number using recursion.

#include <stdio.h>
int count = 0;

int countDigits(int n){
    if(n!=0){
        n = n/10;
        count = count + 1;
        countDigits(n);
    }
    else{
        return count;
    }
}

int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    printf("Number of digits : %d", countDigits(number));
    return 0;
}