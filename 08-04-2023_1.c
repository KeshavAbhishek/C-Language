#include <stdio.h>

void square(int);

int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    square(number);
    return 0;
}

void square(int N){
    printf("\nSquare of %d is %d", N, N*N);
}