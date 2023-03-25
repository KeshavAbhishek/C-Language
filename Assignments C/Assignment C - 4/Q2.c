// WAP to multiply two 3 X 3 matrices.

/*
|1   2   3|       |9   8   7|
|4   5   6|   X   |6   5   4|
|7   8   9|       |3   2   1|
*/

#include <stdio.h>

int main(){
    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
    int arr2[3][3]={9,8,7,6,5,4,3,2,1};
    int arr12[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {   arr12[i][j]=0;
            for (int k = 0; k < 3; k++)
            {
               arr12[i][j] += arr1[i][k] * arr2[k][j];
            //    printf("i=%d \t j=%d \t k=%d \n",i,j,k);
            }

        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",arr12[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
30      24      18
84      69      54
138     114     90
*/