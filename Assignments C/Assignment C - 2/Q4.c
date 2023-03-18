// 4. WAP to check whether a number is armstrong or not by using while loop.

#include <stdio.h>
#include <math.h>

int main(){
    
    int n1, n2, sumValue=0, noDigits = 0;

    printf("Enter a number : ");
    scanf("%d", &n1);
    
    n2 = n1;

    while (n2!=0)
    {
        noDigits++;
        n2 = n2/10;
    }

    n2 = n1;

    while (n2!=0)
    {
        sumValue += powf(n2%10, noDigits);
        n2 = n2/10;
    }

    if(sumValue == n1){
        printf("Entered number is armstrong.");
    }
    else{
        printf("Entered number is not armstrong.");
    }
    
    return 0;
}

/*
Output

Enter a number : 153
Entered number is armstrong.
*/