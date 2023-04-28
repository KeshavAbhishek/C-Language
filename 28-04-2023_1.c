// Finding maximum of array elements using pointers.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int array[10]; // Static Memory Allocation

    int *array;
    array = (int *)malloc(10); // Dynamic Memory Allocation

    printf("\nEnter array element :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }

    int *max = array;

    for (int i = 0; i < 10; i++)
    {
        if (*max < *(array + i))
        {
            max = array + i;
        }
    }

    printf("\nMax : %d", *max);

    return 0;
}