#include <stdio.h>

int main(){
    int array[]={1,7,11,20,40,4,90,3};
    int *ptr;
    ptr = array;
    int max = *(ptr);
    for (int i = 0; i < 8; i++)
    {
        if( *(ptr+i) > max ){
            max = *(ptr+i);
        }
    }
    printf("Maximum element in array : %d", max);
    return 0;
}