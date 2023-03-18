#include <stdio.h>

int main(){
    int dataset[] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20}
    };

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d", dataset[i][j]);
        }
        
    }
    
    return 0;
}