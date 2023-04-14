#include <stdio.h>

int main(){
    int num1, num2;
    int sum1=0, sum2=0;

    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
    
    for (int i = 1; i < num1; i++)
    {
        if(num1%i==0){
            sum1+=i;
        }
    }

    for (int i = 1; i < num2; i++)
    {
        if(num2%i==0){
            sum2+=i;
        }
    }
    
    if(num1 == sum2 && num2 == sum1){
        printf("\nBoth the numbers are amicable numbers.\n");
    }
    else{
        printf("\nNo, both the numbers are not amicable numbers.\n");
    }

    return 0;
}