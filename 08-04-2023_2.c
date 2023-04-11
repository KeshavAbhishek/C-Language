#include <stdio.h>

int sumTwo(int, int);

int main(){
    int num1, num2;
    printf("Enter numbers : ");
    scanf("%d %d", &num1, &num2);
    printf("%d + %d = %d", num1, num2, sumTwo(num1, num2));
    
    return 0;
}

int sumTwo(int a, int b){
    return a+b;
}