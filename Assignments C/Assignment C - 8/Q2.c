// 2. Write a program in C to find the largest element using Dynamic Memory Allocation.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, largest;
    int array[5]={1,2,15,3,4};
    
    // Dynamically allocate memory for the array
    arr = (int*) malloc(5 * sizeof(int));

    arr = array;
    largest = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    printf("The largest element in the array is %d\n", largest);
    
    // free(arr);
    return 0;
}