#include <stdio.h>

int main(){
    int stars = 7;
    int spaces = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            printf("  ");
        }

        for (int k = 0; k < stars; k++)
        {
            printf("* ");
        }

        stars -= 2;
        spaces +=1;
        printf("\n");
        
        
    }
    
    return 0;
}