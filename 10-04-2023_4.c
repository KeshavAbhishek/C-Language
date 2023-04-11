#include <stdio.h>


void factorial(int n){
    int multiply = 1;
    for (int i = 1; i <= n; i++)
    {
        multiply*=i;
    }
    printf("Factorial of %d = %d", n, multiply);
}

int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    factorial(number);
    return 0;
}