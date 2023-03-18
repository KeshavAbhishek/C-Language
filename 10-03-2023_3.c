#include <stdio.h>

int main(){
    int sumValue = 0;
    int n = 1;
    while (n <= 10)
    {
        sumValue += n*n;
        n++;
    }

    printf("\n1^(2) + 2^(2) + .... + 10^(2) = %d", sumValue);

    return 0;
}