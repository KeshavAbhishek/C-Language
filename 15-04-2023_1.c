#include <stdio.h>

int main()
{
    int a = 11;
    int *ptr;

    ptr = &a; // Address of "a" copied into pointer variable ptr

    printf("\nValue of 'a' is %d\n", a);
    printf("Address of 'a' is %u\n", &a);
    printf("Value of pointer variable is %d\n", *ptr);
    printf("Address of pointer ptr %u", &ptr);

    return 0;
}