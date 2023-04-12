// Recurssion

#include <stdio.h>

void factorial(int n, int mul){
    if(n>0){
        mul *= n;
        n = n-1;
        factorial(n, mul);
    }
    else{
        printf("Factorial = %d", mul);
    }
}

int main(){
    int a=7;
    factorial(a, 1);
    return 0;
}