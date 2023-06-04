// Armstrong Number
#include <stdio.h>

int main(){
    int n, sum=0, remainder = 0, n2;

    n = 153;
    n2 = n;

    while (n>0)
    {
        remainder = n%10;
        sum += remainder*remainder*remainder;
        n = n/10;
    }
    
    if(sum==n2){
        printf("Yes, %d is armstrong number.", sum);
    }
    else{
        printf("No, %d is not armstong number.", sum);
    }
    return 0;
}

/*

Yes, 153 is armstrong number.

*/