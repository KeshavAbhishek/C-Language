#include <stdio.h>

int main(){
    int n, sumValue = 0, digit;
    printf("Enter 3 digit number : ");
    scanf("%d", &n);
    while (n!=0)
    {
        digit = n%10;
        sumValue += digit;
        n = n/10;
    }
    printf("The sum of digits of 3 digit number is : %d", sumValue);
    
    return 0;
}