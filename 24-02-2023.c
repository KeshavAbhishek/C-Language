#include <stdio.h> // in-built library

int main()
{
    printf("\nWelcome to C class.\n");
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Sum %d + %d = %d", a, b, a+b);
    return 0;
}