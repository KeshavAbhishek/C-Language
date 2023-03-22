#include <stdio.h>

int main(){
    int array1[3][3]={
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };

    int array2[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int result[3][3]={};


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j]=array1[i][j]+array2[i][j];
        }
    }
    
    printf("\n");
    printf("{\n");
    for (int i = 0; i < 3; i++)
    {
        printf("    {");
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", result[i][j]);
        }
        printf("}");
        printf("\n");
    }
    printf("}");
    return 0;
}