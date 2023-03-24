// WAP to store 13 elements in an 1D array and search an element which is given by the user.

#include <stdio.h>

int main(){
    int array1[13] = {};
    int search;
    int count = 0;
    printf("Enter value\n");
    for (int i = 0; i < 13; i++)
    {
        printf(": ");
        scanf("%d", &array1[i]);
    }

    printf("\nWhich element you want to search : ");
    scanf("%d", &search);

    for (int i = 0; i < 13; i++)
    {
        if(search==array1[i]){
            count++;
        }
    }
    
    if(count!=0){
        printf("Element found !!");
    }
    else{
        printf("Element not found !!");
    }
    return 0;
}

/*
Enter value
: 1
: 2
: 3
: 4
: 5
: 6
: 7
: 87
: 9
: 10
: 11
: 12
: 13

Which element you want to search : 87
Element found !!
*/