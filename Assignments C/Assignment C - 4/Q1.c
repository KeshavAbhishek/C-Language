// WAP to add and subtract two 3 X 3 matrices.

#include <stdio.h>

int main(){
    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
    int arr2[3][3]={9,8,7,6,5,4,3,2,1};

    printf("Sum of two matrices :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }

    printf("\nSubstraction of two matrices :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr1[i][j]-arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
Sum of two matrices :
10 10 10 
10 10 10 
10 10 10 

Substraction of two matrices :
-8 -6 -4 
-2 0 2 
4 6 8
*/