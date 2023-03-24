// WAP to store 16 elements in an 1D array and find largest and smallest element in the array.

#include <stdio.h>

int main(){
    int max = 0;
    int min = 0;

    int arr[16] = {};
    printf("Enter value\n");
    for (int i = 0; i < 16; i++)
    {
        printf(": ");
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];
    // min = arr[0];

    for (int i = 0; i < 16; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }

    printf("Maximum = %d\nMinimum = %d", max, min);

    return 0;
}

/*
Enter value
: 1
: 2
: 3
: -5
: -6
: -7
: 20
: 0
: 7
: 63
: -127
: 152
: 44
: 785
: -150
: 99
Maximum = 785
Minimum = -150
*/