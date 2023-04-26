/*
Dynamic Memory Allocation of Arrays.
We use malloc and calloc function to perform memory allocation.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr, max = 0;
    arr = (int *)malloc(5); // Dynamic Memory Allocation of Arrays

    for (int i = 0; i < 5; i++)
    {
        printf("Enter value : ");
        scanf("%d", &arr[i]);
    }

    max = *arr;

    for (int i = 0; i < 5; i++)
    {
        if( *(arr+i) > max ){
            max = *(arr+i);
        }
    }
    printf("Maximum element in array : %d", max);
    
    return 0;
}