#include <stdio.h>

int main(){
    int index = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("%d ", index);
            index+=1;
        }
        printf("\n");
        index = 1;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3-i; j++)
        {
            printf("%d ", index);
            index+=1;
        }
        printf("\n");
        index = 1;
    }

    return 0;
}