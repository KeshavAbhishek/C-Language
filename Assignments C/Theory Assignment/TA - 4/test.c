#include <stdio.h>

int main(){
    int arr1[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int arr2[4][4]={16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};

    int arr3[4][4]={};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr3[i][j] = arr1[i][j]+arr2[i][j];
        }
        
    }
    
    printf("Result\n");

    for (int k = 0; k < 4; k++)
    {
        for (int x = 0; x < 4; x++)
        {
            printf("%d ", arr3[k][x]);
        }
        printf("\n");
        
    }
    
    return 0;
}