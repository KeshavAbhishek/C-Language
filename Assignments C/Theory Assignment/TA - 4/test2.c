#include <stdio.h>

int main(){
    int stars = 7;
    int spaces = 0;
    int row = 4;

    while (row>=1){
        for (int i = 0; i < spaces; i++)
        {
            printf("  ");
        }
        

        for (int j = 0; j < stars; j++)
        {
            printf("* ");
        }
        
        spaces = spaces +1;

        stars = stars - 2;
        row = row - 1;

        printf("\n");

    }
    
    return 0;
}