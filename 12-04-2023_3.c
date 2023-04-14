// Recurssion

#include <stdio.h>

int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

int main(){
    int a=7;
    printf("%d", factorial(a));
    return 0;
}