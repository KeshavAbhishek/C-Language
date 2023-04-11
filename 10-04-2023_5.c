#include <stdio.h>

void natualSum(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum of n natural number is %d", sum);
}

int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    natualSum(number);
    
    return 0;
}