/*
Aspect related to functions

1. Function Prototype/Declaration
2. Function Call
3. Function argument & parameters
4. Function defination

*/

#include <stdio.h>

// Defined a function
int addMe(int a, int b){
    int sum = a+b;
    return sum;
}

int main(){
    printf("%d", addMe(15,20));
    return 0;
}