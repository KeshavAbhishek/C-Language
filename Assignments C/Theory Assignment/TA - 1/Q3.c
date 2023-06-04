/*

3. Enter a number and check whether the number is an Ugly-Prime
number or not an Ugly-Prime number.

Description: - The given number is ugly prime number if its prime
factor contains only among 2, 3 or 5.

*/


#include <stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int count = 0;

    for (int i = 2; i < n+1; i++)
    {
        if (i==2 | i==3 | i==5){}
        else{
            if(n%i==0){
                count += 1;
            }
        }
    }

    if(count == 0){
        printf("The number is ugly-prime.");
    }
    else{
        printf("The number is not ugly-prime.");
    }
    return 0;
}