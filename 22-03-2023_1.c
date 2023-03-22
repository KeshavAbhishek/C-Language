// 2-D Array

#include <stdio.h>

int main(){
    int sumValue=0;
    int twoD_Array[3][3]={
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            sumValue+=twoD_Array[i][j];
        }
    }
    printf("\nSum of elements of 2D array = %d", sumValue);
    return 0;
}