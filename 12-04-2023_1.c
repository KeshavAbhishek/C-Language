#include <stdio.h>

int SumOfArrEle(int data[]){
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
        sum += data[i];
    }

    return sum;
}

int main(){
    int data[]={1,2,3,4,5,6,7,8,9,10};
    printf("Sum of the digits of array element = %d", SumOfArrEle(data));
    
    return 0;
}