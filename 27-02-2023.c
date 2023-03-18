#include <stdio.h>
#include <string.h>

int main(){
    float a = 7.575;
    printf("Number is : %f\n", a);
    printf("Number is : %20.3f\n", a);
    printf("Number is : %10.3f", a);
    printf("%10.3f\n", a);
    printf("Number is : -%10.3f\n", a);
    printf("K\vE\vS\vH\vA\vV");
    a += 0.2425;
    a++;
    printf("%d", 5==5 && 11<10);

    printf("\n%d", sizeof(a));
    return 0;
}

// Operators in C

// 1. Arithmatic Operators +, -, *, /, %, ++, --
// 2. Assignment Operators
// 3. Comparission Operators
// 4. Logical Operators