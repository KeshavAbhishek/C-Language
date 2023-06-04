// Access elements of array using pointer;


#include <stdio.h>

int main(){
    int array[5]={1,2,3,4,5};

    int * ptr;

    ptr = array;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*(ptr+i));
    }
    
    return 0;
}

/*
1 2 3 4 5
*/