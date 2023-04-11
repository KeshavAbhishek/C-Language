// Q5. WAP to find the sum of 'n' natural numbers using function where 'n' should be entered by the user.

#include <stdio.h>

void natualSum(int n){
    int sum = 0;
    sum = (n*(n+1))/2;

    printf("Sum of n natural number is %d", sum);
}

int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    natualSum(number);
    
    return 0;
}