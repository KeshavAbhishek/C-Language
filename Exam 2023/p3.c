// Multiplication of two 3x3 matrix

#include <stdio.h>

int main(){
    int arr1[3][3]={1,1,1,1,1,1,1,1,1};
    int arr2[3][3]={1,1,1,1,1,1,1,1,1};
    int arr3[3][3]={};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j]=0;
            for (int k = 0; k < 3; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
            
        }
        
    }

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("%d ", arr3[x][y]);
        }
        printf("\n");

    }

    return 0;
}

/*
3 3 3 
3 3 3 
3 3 3 
*/