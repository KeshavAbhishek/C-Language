// 5. Write a C program to swap two arrays using pointers.

#include <stdio.h>

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
    int *ptr1 = arr1;
    int *ptr2 = arr2;

    printf("Before swapping.\narr1 is: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr1 + i));
    }

    printf("\n\nBefore swapping.\narr2 is: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr2 + i));
    }

    for (int i = 0; i < 5; i++) {
        *(ptr1 + i) = *(ptr1 + i) + *(ptr2 + i);
        *(ptr2 + i) = *(ptr1 + i) - *(ptr2 + i);
        *(ptr1 + i) = *(ptr1 + i) - *(ptr2 + i);
    }

    printf("\n\nAfter swapping.\narr1 is: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr1 + i));
    }

    printf("\n\nAfter swapping.\narr2 is: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr2 + i));
    }

    return 0;
}