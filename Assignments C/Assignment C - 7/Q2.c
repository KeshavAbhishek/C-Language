// Write a C program to swap two numbers using pointers.

#include <stdio.h>

int main(){
    int num1, num2;
    int *ptr1, *ptr2;

    num1 = 1;
    num2 = 2;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Before Swap : %d %d", *ptr1, *ptr2);

    ptr1 = &num2;
    ptr2 = &num1;

    printf("\nAfter Swap : %d %d", *ptr1, *ptr2);

    return 0;
}