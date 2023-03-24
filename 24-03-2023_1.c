#include <stdio.h>

int main(){
    int array[3][3]={};

    // array[i][j] = I+W*(i-I_row)*N+(j-I_col) ; for row address
    // I = 5000 (Base address)
    // W is size of data = 2
    // I_row = Lower bound of row = 0
    // N : No. of columns = 3
    // I_col = Lower bound of column = 0

    // array[i][j] = I+W*(i-I_row)*N+(j-I_col)
    // array[2][2] = 5000+2*(2-0)*3+(2-0);
    // printf("%d", array[2][2]);

    printf("For row address :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            array[i][j] = 1000+2*(i-0)*3+(j-0);
            printf("(%d, %d) = %d\n", i, j, array[i][j]);
        }        
    }

    // array[i][j] = I+W*(j-I_row)*N+(i-I_col) ; for column address
    printf("\nFor column address : i replaced with j\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            array[i][j] = 1000+2*(j-0)*3+(i-0);
            printf("(%d, %d) = %d\n", i, j, array[i][j]);
        }        
    }
    
    return 0;
}