#include <stdio.h>

int main(){
    float n1, n2, n3, sum, avg;
    printf("Enter three numbers : ");
    scanf("%f %f %f", &n1, &n2, &n3);
    sum = n1+n2+n3;
    avg = sum/3.0;
    printf("Sum : %f", sum);
    printf("\nAverage : %f", avg);
    return 0;
}

// Output
// Enter three numbers : 17 20 25
// Sum : 62.000000
// Average : 20.666666