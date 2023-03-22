#include <stdio.h>

int main(){
    int result[3][3] = {
        11,22,33,
        44,55,66,
        77,88,99
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("(%d,%d) %d\n", i, j, result[i][j]);
        }
    }

    return 0;
}