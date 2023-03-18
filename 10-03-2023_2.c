#include <stdio.h>

int main(){
    int i = 0;
    int j;

    while (i<4)
    {
        j = 0;
        while (j < i+1)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
        
    }

    return 0;
}