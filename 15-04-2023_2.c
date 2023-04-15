#include <stdio.h>

int main()
{
    float a = 11.556;
    float *ptr;

    ptr = &a; // Address of "a" copied into pointer variable ptr

    // printf("PTR BASE ADDRESS %u\nSum %u\nSub %u", ptr, ptr+1, ptr-1);

    printf("\n\nBase address of the pointer type double : %u\n\nptr + 2 = %u\nptr + 3 = %u\nptr - 2 = %u", ptr, ptr+2, ptr+3, ptr-2);

    return 0;
}