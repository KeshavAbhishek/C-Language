#include <stdio.h>

int armstrong(int number){
    int originalNumber, sumNumber=0, remainder;

    originalNumber = number;

    while (number!=0)
    {
        remainder = number%10;
        sumNumber += remainder*remainder*remainder;
        number = number/10;
    }

    return sumNumber;
    
}

int main(){
    int num;
    printf("Enter a number = ");
    scanf("%d", &num);
    
    if(num>0 && num == armstrong(num)){
        printf("Yes, %d is an armstrong number.", num);
    }
    else{
        printf("No, it's not an armstrong.");
    }
    return 0;
}