/*
1. Enter a number and check whether the number is a Prime number
or not a Prime number.
*/

#include <stdio.h>

int main(){
    int n, count=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        if(n%i==0){
            count++;
        }
    }

    if(count==1){
        printf("Yes, prime.");
    }
    else{
        printf("No, not a prime.");
    }
    
    return 0;
}