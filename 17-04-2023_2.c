// 2. WAP in C to print the array elements using recursion.

#include <stdio.h>
int index = 0;

int arrayValueThrower(int array[]){
    printf("%d\n", array[index]);
    index += 1;
    if(index<5){
        arrayValueThrower(array);
    }
    else{
        return 0;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    arrayValueThrower(arr);
    return 0;
}