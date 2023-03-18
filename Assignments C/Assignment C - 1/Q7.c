#include <stdio.h>

int main(){
    int n1, n2, n3;
    printf("Enter two numbers : ");
    scanf("%d %d", &n1, &n2);
    printf("Before swapping : %d %d", n1, n2);
    n3 = n2;
    n2 = n1;
    n1 = n3;
    printf("\nAfter swapping : %d %d", n1, n2);
    return 0;
}

// Output
// Enter two numbers : 10 20
// Before swapping : 10 20
// After swapping : 20 10